//Program: Nilai absolut atas sebuah integer

#include <iostream>

using namespace std;

int main()
{
    int angka, temp;

    cout << "Baris 1: Masukkan sebuah integer: "; //Baris 1
    cin >> angka; //Baris 2
    cout << endl; //Baris 3

    temp = angka; //Baris 4

    if (angka < 0) //Baris 5
        angka = -angka; //Baris 6
    
	cout << "Baris 7: Nilai absolut atas "
             << temp << " adalah " << angka << endl; //Baris 7
    
	return 0;
}