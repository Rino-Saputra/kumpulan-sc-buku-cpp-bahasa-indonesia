// kode3.9.cpp
#include <iostream>
#include <string>
#include <new>
using namespace std;
const int BUF = 512;
class HanyaCoba
{
private:
string kata;
int angka;
public:
HanyaCoba(const string & s = "Hanya Mencoba", int n = 0)
{kata = s; angka = n; cout << kata << " dikonstruksi\n"; }
~HanyaCoba() { cout << kata << " dihancurkan\n";}
void Tampil() const { cout << kata << ", " << angka << endl;}
};
int main()
{
char * buffer = new char[BUF]; // memperoleh suatu blok memori
HanyaCoba *pc1, *pc2;
pc1 = new (buffer) HanyaCoba; // menempatkan objek di dalam buffer
pc2 = new HanyaCoba("Heap1", 20); // menempatkan objek pada heap
cout << "Alamat blok memori:\n" << "buffer: "
<< (void *) buffer << " heap: " << pc2 <<endl;
cout << "Isi memori:\n";
cout << pc1 << ": ";
pc1->Tampil();
cout << pc2 << ": ";
pc2->Tampil();
HanyaCoba *pc3, *pc4;
// memperbaiki lokasi penempatan new
pc3 = new (buffer + sizeof (HanyaCoba))
HanyaCoba("Ide lebih baik", 6);
pc4 = new HanyaCoba("Heap2", 10);
cout << "Isi memori:\n";
cout << pc3 << ": ";
pc3->Tampil();
cout << pc4 << ": ";
pc4->Tampil();
delete pc2; // membebaskan Heap1
delete pc4; // membebaskan Heap2
// secara eksplisit menghancurkan objek-objek penempatan new
pc3->~HanyaCoba(); // menghancurkan objek yang ditunjuk oleh pc3
pc1->~HanyaCoba(); // menghancurkan objek yang ditunjuk oleh pc1
delete [] buffer; // membebaskan buffer
cout << "Selesai\n";
return 0;
}