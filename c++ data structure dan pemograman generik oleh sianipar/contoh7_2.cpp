//**************************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaiman menggunakan pengurutan
// seleksi di dalam sebuah program.
//**************************************************************

#include <iostream> 
#include "tipeSenaraiArray.h" 

using namespace std; 

int main() 
{ 
    tipeSenaraiArray<int> list;
    int angka; 

	cout << "Baris 8: Masukkan beberapa angka diakhiri dengan -999"
         << endl; 

	cin >> angka;

    while (angka != -999) 
	{ 
        list.sisip(angka); 
        cin >> angka; 
	} 

	cout << "Baris 15: Senarai sebelum pengurutan:" << endl; 
    list.tampil();
    cout << endl; 

	list.pengurutanPenyisipan(); 

    cout << "Baris 19: Senarai setelah pengurutan:" << endl; 
    list.tampil(); 
    cout << endl; 

	return 0; 
}