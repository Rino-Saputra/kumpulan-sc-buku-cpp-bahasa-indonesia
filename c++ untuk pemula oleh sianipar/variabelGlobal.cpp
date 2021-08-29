//Variabel global

#include <iostream>

using namespace std;

int t;

void fungsiSatu(int& a);

int main()
{
    t = 15; //Baris 1

    cout << "Baris 2: Di dalam main: t = " << t << endl; //Baris 2

    fungsiSatu(t); //Baris 3

    cout << "Baris 4: di dalam main setelah fungsiSatu: "
         << " t = " << t << endl; //Baris 4

    return 0; //Baris 5
}

void fungsiSatu(int& a)
{
    cout << "Baris 6: Di dalam fungsiSatu: a = " << a
         << " dan t = " << t << endl; //Baris 6

    a = a + 12; //Baris 7

    cout << "Baris 8: Di dalam fungsiSatu: a = " << a
         << " dan t = " << t << endl; //Baris 8

    t = t + 13; //Baris 9

    cout << "Baris 10: Di dalam fungsiSatu: a = " << a
         << " dan t = " << t << endl; //Baris 10
}