//kode1.23.cpp
#include <iostream>
using namespace std;
class kelasku {
public:
int siapa;
kelasku(int id);
~kelasku();
} glob_ob1(1), glob_ob2(2);
kelasku::kelasku(int id)
{
cout << "Inisialisasi " << id << "\n";
siapa = id;
}
kelasku::~kelasku()
{
cout << "Menghancurkan " << siapa << "\n";
}
int main()
{
kelasku lokal_ob1(3);
cout << "Ini bukanlah baris pertama yang ditampilkan.\n";
kelasku lokal_ob2(4);
return 0;
}