//Program untuk membaca lima angka, menghitung penjumlahannya, dan
//menampilkan tiap angka dalam urutan terbalik.

#include <iostream>

using namespace std;

int main()
{
    int item[5]; //Mendeklarasikan sebuah array item dengan lima komponen
    int jum;
    int kounter;

    cout << "Masukkan lima angka: ";

    jum = 0;

    for (kounter = 0; kounter < 5; kounter++)
    {
        cin >> item[kounter];
        jum = jum + item[kounter];
    }

    cout << endl;
    cout << "Penjumlahan atas tiap angka adalah: " << jum << endl;
    cout << "Angka - angka dalam urutan terbalik adalah: ";

    //Menampilkan angka - angka dalam urutan terbalik.
    for (kounter = 4; kounter >= 0; kounter--)
        cout << item[kounter] << " ";

    cout << endl;

    return 0;
}