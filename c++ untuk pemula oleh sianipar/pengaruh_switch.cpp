//Program: pengaruh dari statemen break pada struktur switch

#include <iostream>

using namespace std;

int main()
{
    int angka;

    cout << "Masukkan sebuah integer antara 0 dan 7: "; //Baris 1
    cin >> angka; //Baris 2
    cout << endl; //Baris 3
    cout << "Angka yang Anda masukkan adalah " << angka
         << endl; //Baris 4

    switch(angka) //Baris 5
	{
        case 0: //Baris 6
        case 1: //Baris 7
            cout << "Belajar menggunakan "; //Baris 8
        case 2: //Baris 9
            cout << "struktur switch "; //Baris 10
        case 3: //Baris 11
            cout << "C++." << endl; //Baris 12
            break; //Baris 13
        case 4: //Baris 14
            break; //Baris 15
        case 5: //Baris 16
            cout << "Program ini menunjukkan pengaruh "; //Baris 17
        case 6: //Baris 18
        case 7: //Baris 19
            cout << "dari statemen break." << endl; //Baris 20
            break; //Baris 21
        default: //Baris 22
            cout << "Angka ini di luar rentang." << endl; //Baris 23
	}

    cout << "Di luar struktur switch." << endl; //Baris 24

    return 0; //Baris 25
}