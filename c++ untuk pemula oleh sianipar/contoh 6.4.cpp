//Contoh 6.4
//Program mengilustrasikan bagaimana sebuah parameter nilai bekerja.

#include <iostream>

using namespace std;

void fungsiNilaiParam(int angka);

int main()
{
    int bilangan = 6; //Baris 1

    cout << "Baris 2: Sebelum memanggil fungsi "
         << "fungsiNilaiParam, bilangan = " << bilangan
         << endl; //Baris 2

    fungsiNilaiParam(bilangan); //Baris 3

    cout << "Baris 4: Setelah memanggil fungsi "
         << "fungsiNilaiParam, bilangan = " << bilangan
         << endl; //Baris 4

    return 0;
}

void fungsiNilaiParam(int angka)
{
    cout << "Baris 5: Di dalam fungsi fungsiNilaiParam, "
         << "sebelum pengubahan, angka = " << angka
         << endl; //Baris 5

    angka = 15; //Baris 6

    cout << "Baris 7: Di dalam fungsi fungsiNilaiParam, "
         << "setelah pengubahan, angka = " << angka
         << endl; //Baris 7
}