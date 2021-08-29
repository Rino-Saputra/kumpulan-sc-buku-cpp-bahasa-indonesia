//***************************************************************
// Program ini menunjukkan dimana mencantumkan statemen-statemen,
// menggunakan statemen, konstanta bernama, deklarasi variabel,
// statemen penugasan, dan statemen masukan/keluaran secara umum.
//***************************************************************

#include <iostream> //Baris 1

using namespace std; //Baris 2

const int ANGKA = 12; //Baris 3

int main() //Baris 4
{ //Baris 5
    int angkaPertama; //Baris 6
    int angkaKedua; //Baris 7

    angkaPertama = 18; //Baris 8
    cout << "Baris 9: angkaPertama = " << angkaPertama
         << endl; //Baris 9

    cout << "Baris 10: Masukkan sebuah integer: "; //Baris 10
    cin >> angkaKedua; //Baris 11
    cout << endl; //Baris 12

    cout << "Baris 13: angkaKedua = " << angkaKedua
         << endl; //Baris 13

    angkaPertama = angkaPertama + ANGKA + 2 * angkaKedua; //Baris 14

    cout << "Baris 15: Nilai baru dari "
         << "angkaPertama = " << angkaPertama << endl; //Baris 15

    return 0; //Baris 16
} //Baris 17