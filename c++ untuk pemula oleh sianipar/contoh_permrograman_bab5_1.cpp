//********************************************************
// Program ini mencari angka terbesar dari himpunan data
// yang memuat 10 angka.
//********************************************************

#include <iostream>

using namespace std;

double terbesar(double x, double y);

int main()
{
    double angka; //variabel untuk memuat angka terkini
    double maks; //variabel untuk memuat angka terbesar
    int hitung; //variabel kendali loop

    cout << "Masukkan 10 angka." << endl;
    cin >> angka; //Langkah 1
 
    maks = angka; //Langkah 1

    for (hitung = 1; hitung < 10; hitung++) //Langkah 2
    {
        cin >> angka; //Langkah 2a
        maks = terbesar(maks, angka); //Langkah 2b
    }

    cout << "Angka terbesar adalah " << maks
         << endl; //Langkah 3

    return 0;
}//akhir main

double terbesar(double x, double y)
{
    if (x >= y)
        return x;
    else
        return y;
}