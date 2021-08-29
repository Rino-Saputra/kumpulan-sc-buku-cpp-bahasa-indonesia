//Contoh 6.7: Parameter referensi dan parameter nilai.
//Program: Membuat Anda berpikir.

#include <iostream>

using namespace std;

void tambahPertama(int& pertama, int& kedua);
void gandaPertama(int satu, int dua);
void kuadratPertama(int& ref, int nil);

int main()
{
    int angka = 5;

    cout << "Baris 1: Di dalam main: angka = " << angka
         << endl; //Baris 1

    tambahPertama(angka, angka); //Baris 2

    cout << "Baris 3: Di dalam main setelah tambahPertama:"
         << " angka = " << angka << endl; //Baris 3

    gandaPertama(angka, angka); //Baris 4

    cout << "Baris 5: Di dalam main setelah "
         << "gandaPertama: angka = " << angka << endl; //Baris 5

    kuadratPertama(angka, angka); //Baris 6

    cout << "Baris 7: Di dalam main setelah "
         << "kuadratPertama: angka = " << angka << endl; //Baris 7

    return 0;
}

void tambahPertama(int& pertama, int& kedua)
{
    cout << "Baris 8: Di dalam tambahPertama: pertama = "
         << pertama << ", kedua = " << kedua << endl; //Baris 8

    pertama = pertama + 2; //Baris 9

    cout << "Baris 10: Di dalam tambahPertama: pertama = "
         << pertama << ", kedua = " << kedua << endl; //Baris 10

    kedua = kedua * 2; //Baris 11

    cout << "Baris 12: Di dalam tambahPertama: pertama = "
         << pertama << ", kedua = " << kedua << endl; //Baris 12
}

void gandaPertama(int satu, int dua)
{
    cout << "Baris 13: Di dalam gandaPertama: satu = "
         << satu << ", dua = " << dua << endl; //Baris 13

    satu = satu * 2; //Baris 14

    cout << "Baris 15: Di dalam gandaPertama: satu = "
         << satu << ", dua = " << dua << endl; //Baris 15

    dua = dua + 2; //Baris 16

    cout << "Baris 17: Di dalam gandaPertama: satu = "
         << satu << ", dua = " << dua << endl; //Baris 17
}

void kuadratPertama(int& ref, int nil)
{
    cout << "Baris 18: Di dalam kuadratPertama: ref = "
         << ref << ", nil = " << nil << endl; //Baris 18

    ref = ref * ref; //Baris 19

    cout << "Baris 20: Di dalam kuadratPertama: ref = "
         << ref << ", nil = " << nil << endl; //Baris 20

    nil = nil + 2; //Baris 21

    cout << "Baris 22: Di dalam kuadratPertama: ref = "
         << ref << ", nil = " << nil << endl; //Baris 22
}