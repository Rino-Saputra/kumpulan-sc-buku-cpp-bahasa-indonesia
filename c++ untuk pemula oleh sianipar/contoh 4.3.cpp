//Program: Loop terkendali-kounter

#include <iostream>

using namespace std;

int main()
{
    int batas; //menyimpan jumlah item data
    int angka; //variabel untuk menyimpan angka
    int jum; //variabel untuk menyimpan jumlah
    int kounter; //variabel kendali loop

    cout << "Baris 1: Masukkan jumlah "
         << "integer di dalam daftar: "; //Baris 1
    cin >> batas; //Baris 2
    cout << endl; //Baris 3

    jum = 0; //Baris 4
    kounter = 0; //Baris 5
    cout << "Baris 6: Masukkan " << batas
         << " buah integer." << endl; //Baris 6

    while (kounter < batas) //Baris 7
	{
        cin >> angka; //Baris 8
        jum = jum + angka; //Baris 9
        kounter++; //Baris 10
	}

    cout << "Baris 11: Penjumlahan atas " << batas
         << " angka = " << jum << endl; //Baris 11

    if (kounter != 0) //Baris 12
        cout << "Baris 13: Rerata = "
             << jum / kounter << endl; //Baris 13
    else //Baris 14
        cout << "Baris 15: Tidak ada masukan." << endl; //Baris 15

    return 0; //Baris 16
}