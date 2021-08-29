//**********************************************************
// Program untuk mengkonversi pengukuran dalam kaki dan inci
// menjadi sentimeter menggunakan formula bahwa 1 inci sama
// dengan 2.54 sentimeter.
//********************************************************

//File header
#include <iostream>

using namespace std;

//Konstanta bernama
const double SENTIMETER_PER_INCI = 2.54;
const int INCI_PER_KAKI = 12;

int main ()
{
    //Mendeklarasikan variabel
    int kaki, inci;
    int totalInci;
    double sentimeter;

    //Statemen: Langkah 1 - Langkah 7
    cout << "Masukkan dua integer, satu untuk kaki dan "
         << "satu untuk inci: "; //Langkah 1
    cin >> kaki >> inci; //Langkah 2
    cout << endl;

    cout << "Angka-angka yang Anda masukkan adalah " << kaki
         << " untuk kaki dan " << inci
         << " untuk inci. " << endl; //Langkah 3

    totalInci = INCI_PER_KAKI * kaki + inci; //Langkah 4

    cout << "Jumlah total inci = "
         << totalInci << endl; //Langkah 5

    sentimeter = SENTIMETER_PER_INCI * totalInci; //Langkah 6

    cout << "Jumlah sentimeter = "
         << sentimeter << endl; //Langkah 7

    return 0;
}