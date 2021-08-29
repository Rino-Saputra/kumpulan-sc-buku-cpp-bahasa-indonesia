//Program: Loop terkendali-sentinel

#include <iostream>

using namespace std;

const int SENTINEL = -999;

int main()
{
    int angka; //variabel untuk menyimpan angka
    int jum = 0; //variabel untuk menyimpan jum
    int hitung = 0; //variabel untuk menyimpan total

    //membaca angka-angka
    cout << "Baris 1: Masukkan integer-integer diakhiri dengan "
         << SENTINEL << endl; //Baris 1
    cin >> angka; //Baris 2
 
    while (angka != SENTINEL) //Baris 3
	{
        jum = jum + angka; //Baris 4
        hitung++; //Baris 5
        cin >> angka; //Baris 6
	}

    cout << "Baris 7: Penjumlahan dari " << hitung
         << " angka-angka adalah " << jum << endl; //Baris 7

    if (hitung != 0) //Baris 8
        cout << "Baris 9: Rerata adalah "
             << jum / hitung << endl; //Baris 9
    else //Baris 10
        cout << "Baris 11: Tidak ada masukan." << endl; //Baris 11

    return 0;
}