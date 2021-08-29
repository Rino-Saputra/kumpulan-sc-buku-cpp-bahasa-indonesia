//Program: Menampilkan pola segitiga bintang

#include <iostream>

using namespace std;

void tampilBintang(int spasi, int bintangPdBaris);

int main()
{
    int jumlahBaris; //variabel untuk menyimpan jumlah baris
    int kounter; //variabel kendali loop for
    int jumlahSpasi; //variabel untuk menyimpan jumlah spasi

    cout << "Masukkan jumlah baris bintang (1 sampai 20) "
         << "yang akan ditampilkan "; //Baris 1
    cin >> jumlahBaris; //Baris 2

    while (jumlahBaris < 0 || jumlahBaris > 20) //Baris 3
	{
        cout << "Jumlah baris bintang harus "
             << "antara 1 dan 20" << endl; //Baris 4

        cout << "Masukkan jumlah baris bintang "
             << "(1 sampai 20) yang akan ditampilkan: "; //Baris 5

        cin >> jumlahBaris; //Baris 6
	}

    cout << endl << endl; //Baris 7
    jumlahSpasi = 30; //Baris 8

    for (kounter = 1; kounter <= jumlahBaris; kounter++) //Baris 9
	{
        tampilBintang(jumlahSpasi, kounter); //Baris 10
        jumlahSpasi--; //Baris 11
	}

    return 0; //Baris 12
}


void tampilBintang(int spasi, int bintangPdBaris)
{
    int hitung;

    for (hitung = 1; hitung <= spasi; hitung++) //Baris 13
        cout << ' '; //Baris 14

    for (hitung = 1; hitung <= bintangPdBaris; hitung++) //Baris 15
        cout << " * "; //Baris 16
    cout << endl;
}