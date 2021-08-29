//Program: Terbesar dari tiga angka

#include <iostream>

using namespace std;

double terbesar(double x, double y);
double bandingTiga(double x, double y, double z);

int main()
{
    double satu, dua; //Baris 1

    cout << "Baris 2: Yang terbesar dari 5 dan 10 adalah "
         << terbesar(5, 10) << endl; //Baris 2

    cout << "Baris 3: Masukkan dua angka: "; //Baris 3
    cin >> satu >> dua; //Baris 4
    cout << endl; //Baris 5

    cout << "Baris 6: Yang terbesar dari " << satu
         << " dan " << dua << " adalah "
         << terbesar(satu, dua) << endl; //Baris 6

    cout << "Baris 7: Yang terbesar dari 43.48, 34.00, "
         << "dan 12.65 adalah "
         << bandingTiga(43.48, 34.00, 12.65)
         << endl; //Baris 7

    return 0;
}

double terbesar(double x, double y)
{
    double maks;

    if (x >= y)
        maks = x;
    else
        maks = y;

    return maks;
}

double bandingTiga(double x, double y, double z)
{
    return terbesar(x, terbesar(y, z));
}