//Program: Membandingkan angka-angka
//Program ini membandingkan dua integer dan menampilkan yang terbesar.

#include <iostream>

using namespace std;

int main()
{
    int angka1, angka2;

    cout << "Masukkan dua integer: ";
    cin >> angka1 >> angka2;
    cout << endl;

    cout << "Dua integer yang dimasukkan adalah " << angka1
         << " dan " << angka2 << endl;

    if (angka1 > angka2)
        cout << "Angka terbesar adalah " << angka1 << endl;
    else if (angka2 > angka1)
        cout << "Angka terbesar adalah " << angka2 << endl;
    else
        cout << "Kedua angka sama." << endl;

    return 0;
}