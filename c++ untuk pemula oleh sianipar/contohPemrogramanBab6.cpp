//*************************************************************
// Program: Klasifikasi Angka
// Program ini membaca 20 angka dan menampilkan jumlah angka nol, 
// ganjil, dan genap.
//*************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

const int N = 20;

//Prototipe fungsi
void inisialisasi(int& hitungNol, int& hitungGanjil, int& hitungGenap);
void dapatAngka(int& angka);
void klasifikasiAngka(int angka, int& hitungNol, int& hitungGanjil, int& hitungGenap);
void tampilHasil(int hitungNol, int hitungGanjil, int hitungGenap);

int main()
{
    //Deklarasi variabel
    int kounter; //variabel kendali loop
    int angka; //variabel untuk menyimpan angka baru
    int nol; //variabel untuk menyimpan jumlah angka nol
    int ganjil; //variabel untuk menyimpan jumlah angka ganjil
    int genap; //variabel untuk menyimpan jumlah angka genap

    inisialisasi(nol, ganjil, genap); //Langkah 1

    cout << "Masukkan sebanyak " << N << " integer."
         << endl; //Langkah 2

    cout << "Angka-Angka yang Anda masukkan adalah: "
         << endl;

    for (kounter = 1; kounter <= N; kounter++) //Langkah 3
    {
        dapatAngka(angka); //Langkah 3a
        cout << angka << " "; //Langkah 3b
        klasifikasiAngka(angka, nol, ganjil, genap); //Langkah 3c
    } // akhir loop for 
    cout << endl;

    tampilHasil(nol, ganjil, genap); //Langkah 4

    return 0;
}

void inisialisasi(int& hitungNol, int& hitungGanjil, int& hitungGenap)
{
    hitungNol = 0;
    hitungGanjil = 0;
    hitungGenap = 0;
}


void dapatAngka(int& angka)
{
    cin >> angka;
}

void klasifikasiAngka(int angka, int& hitungNol, int& hitungGanjil,
                      int& hitungGenap)
{
    switch (angka % 2)
    {
        case 0:
            hitungGenap++;

            if (angka == 0)
                hitungNol++;
            break;
        case 1:
        case -1:
            hitungGanjil++;
    } //akhir switch
} //akhir klasifikasiAngka


void tampilHasil(int hitungNol, int hitungGanjil, int hitungGenap)
{
    cout << "Terdapat " << hitungGenap << " genap, "
         << "yang mencakup " << hitungNol << " nol"
         << endl;

    cout << "Jumlah angka ganjil adalah: " << hitungGanjil
         << endl;
} //akhir tampilHasil
