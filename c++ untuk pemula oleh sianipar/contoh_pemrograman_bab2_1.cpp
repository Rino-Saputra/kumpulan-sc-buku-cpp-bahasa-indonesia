//************************************************************
// Program: Penjualan Tiket Film
// Program ini menentukan uang yang akan didonasikan kepada
// sebuah yayasan. Ia meminta pengguna untuk memasukkan nama
// film, harga tiket dewasa, harga tiket anak, jumlah tiket
// dewasa terjual, jumlah tiket anak terjual, dan persentase
// keuntungan kotor yang akan didonasikan kepada yayasan.
//************************************************************

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    //Langkah 1
    string namaFilm;
    double hargaTiketDewasa;
    double hargaTiketAnak;
    int JlhTiketDewasaTerjual;
    int JlhTiketAnakTerjual;
    double persenDonasi;
    double keuntunganKotor;
    double jumlahDonasi;
    double penjualanBersih;

    cout << fixed << showpoint << setprecision(2); //Langkah 2

    cout << "Masukkan nama film: "; //Langkah 3
    getline(cin, namaFilm); //Langkah 4
    cout << endl;

    cout << "Masukkan harga tiket dewasa: "; //Langkah 5
    cin >> hargaTiketDewasa; //Langkah 6
    cout << endl;

    cout << "Masukkan harga tiket anak: "; //Langkah 7
    cin >> hargaTiketAnak; //Langkah 8
    cout << endl;

    cout << "Masukkan jumlah tiket dewasa "
         << "terjual: "; //Langkah 9
    cin >> JlhTiketDewasaTerjual; //Langkah 10
    cout << endl;

    cout << "Masukkan jumlah tiket anak "
         << "terjual: "; //Langkah 11
    cin >> JlhTiketAnakTerjual; //Langkah 12
    cout << endl;

    cout << "Masukkan persentase donasi: "; //Langkah 13
    cin >> persenDonasi; //Langkah 14
    cout << endl << endl;

    //Langkah 15
    keuntunganKotor = hargaTiketDewasa * JlhTiketDewasaTerjual +
                  hargaTiketAnak * JlhTiketAnakTerjual;

    //Langkah 16
    jumlahDonasi = keuntunganKotor * persenDonasi / 100;
    penjualanBersih = keuntunganKotor - jumlahDonasi; //Langkah 17

    //Langkah 18: Output results
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
         << "-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << setfill('.') << left << setw(35) << "Nama Film: "
         << right << " " << namaFilm << endl;
    cout << left << setw(35) << "Jumlah Tiket Terjual: "
         << setfill(' ') << right << setw(10)
         << JlhTiketDewasaTerjual + JlhTiketDewasaTerjual
         << endl;
    cout << setfill('.') << left << setw(35) << "Keuntungan Kotor: "
         << setfill(' ') << right << " Rp. "
         << setw(8) << keuntunganKotor << endl;
    cout << setfill('.') << left << setw(35)
         << "Persen Keuntungan Kotor Didonasikan: "
         << setfill(' ') << right
         << setw(9) << persenDonasi << '%' << endl;
    cout << setfill('.') << left << setw(35) << "Jumlah Didonasikan: "
         << setfill(' ') << right << " Rp. "
         << setw(8) << jumlahDonasi << endl;
    cout << setfill('.') << left << setw(35) << "Penjualan Bersih: "
         << setfill(' ') << right << " Rp. "
         << setw(8) << penjualanBersih << endl;

    return 0;
}