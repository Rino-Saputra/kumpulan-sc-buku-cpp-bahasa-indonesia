//Contoh 6.6: Parameter referensi dan parameter nilai

#include <iostream>

using namespace std;

void fungsiSatu(int a, int& b, char v);
void fungsiDua(int& x, int y, char& w);

int main()
{
    int angka1, angka2;
    char ch;

    angka1 = 10; //Baris 1
    angka2 = 15; //Baris 2
    ch = 'A'; //Baris 3

    cout << "Baris 4: Di dalam main: angka1 = " << angka1
         << ", angka2 = " << angka2 << ", dan ch = "
         << ch << endl; //Baris 4

    fungsiSatu(angka1, angka2, ch); //Baris 5

    cout << "Baris 6: Setelah fungsiSatu: angka1 = " << angka1
         << ", angka2 = " << angka2 << ", dan ch = "
         << ch << endl; //Baris 6

    fungsiDua(angka2, 25, ch); //Baris 7
    
	cout << "Baris 8: Setelah fungsiDua: angka1 = " << angka1
         << ", angka2 = " << angka2 << ", dan ch = "
         << ch << endl; //Baris 8

    return 0;
}

void fungsiSatu(int a, int& b, char v)
{
    int satu;
    satu = a; //Baris 9
    a++; //Baris 10
    b = b * 2; //Baris 11
    v = 'B'; //Baris 12

    cout << "Baris 13: Di dalam fungsiSatu: a = " << a
         << ", b = " << b << ", v = " << v
         << ", dan satu = " << satu << endl; //Baris 13
}

void fungsiDua(int& x, int y, char& w)
{
    x++; //Baris 14
    y = y * 2; //Baris 15
    w = 'G'; //Baris 16

    cout << "Baris 17: Di dalam fungsiDua: x = " << x
         << ", y = " << y << ", dan w = " << w
         << endl; //Baris 17
}