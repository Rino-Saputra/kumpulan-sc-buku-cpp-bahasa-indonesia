//Sebuah program C++ yang diformat tidak layak.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int angka; 
    double tinggi;
    string nama;

    cout << "Masukkan sebuah integer: "; 
    cin >> angka; 
    cout << endl;
    cout << "angka: " << angka << endl;

    cout << "Masukkan nama pertama: "; 
    cin >> nama;
    cout << endl; 
	
    cout << "Masukkan tingi: ";
    cin >> tinggi; 
    cout << endl;

    cout << "Nama: " << nama << endl;
    cout << "Tinggi: " << tinggi; 
    cout << endl;

    return 0;
}