//**************************************************************
// Penulis: RH. Sianipar
//
// Program ini menggunkaan kelas penyimpanUang dan tipeDispenser
// untuk mengimplementasikan mesin jus buah.
// *************************************************************

#include <iostream>
#include "penyimpanUang.h"
#include "tipeDispenser.h"

using namespace std;

void tampilPilihan();
void jualProduk(tipeDispenser& produk, penyimpanUang& pKounter);

int main()
{
    penyimpanUang kounter;
    tipeDispenser jusApel(100, 50);
    tipeDispenser jusJeruk(100, 65);
    tipeDispenser jusMangga(75, 45);
    tipeDispenser jusAnggur(100, 85);

    int pilihan; //variabel untuk menampung pilihan

    tampilPilihan();
    cin >> pilihan;

    while (pilihan != 9)
    {
        switch (pilihan)
        {
        case 1:
            jualProduk(jusApel, kounter);
            break;

        case 2:
            jualProduk(jusJeruk, kounter);
            break;

        case 3:
            jualProduk(jusMangga, kounter);
            break;

        case 4:
            jualProduk(jusAnggur, kounter);
            break;

        default:
            cout << "Pilihan tak-valid." << endl;
        }//akhir switch

        tampilPilihan(); 
        cin >> pilihan;
    }//akhir while

    return 0;
}//akhir main

void jualProduk(tipeDispenser& produk, penyimpanUang& pKounter)
{
    int jumlah; //variabel untuk menampung uang yang diserahkan
    int jumlah2; //variabel untuk menampung uang tambahan yang diperlukan

    if (produk.getJumlahItem() > 0) //jika dispenser tidak kosong
    {
        cout << "Masukkan uang Anda " << produk.getBiaya()
             << " rupiah" << endl;
        cin >> jumlah;

        if (jumlah < produk.getBiaya())
        {
            cout << "Silahkan masukkan uang tambahan "
                 << produk.getBiaya()- jumlah << " rupiah" << endl;
            cin >> jumlah2;
            jumlah = jumlah + jumlah2;
        }

        if (jumlah >= produk.getBiaya())
        {
            pKounter.terimaUang(jumlah);
            produk.lakukanPenjualan();
            cout << "Silahkan ambil item Anda dan selamat menikmati."
                 << endl;
        }
 
        else
            cout << "Uang yang diserahkan tidak cukup. "
                  << "Silahkan ambil kembali uang Anda." << endl;
        
        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
             << endl << endl;
    }
    else
        cout << "Maaf, item ini telah habis terjual." << endl;
}//akhir jualProduk

void tampilPilihan()
{
    cout << "*** Selamat Datang Kantin RH. Sianipar ***" << endl;
    cout << "Untuk memilih sebuah item, masukkan " << endl;
    cout << "1 untuk jus apel" << endl;
    cout << "2 untuk jus jeruk" << endl;
    cout << "3 untuk jus mangga" << endl;
    cout << "4 untuk jus anggur" << endl;
    cout << "9 untuk keluar" << endl;
}//akhir tampilPilihan
