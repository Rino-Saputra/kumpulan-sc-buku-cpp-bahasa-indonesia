//**************************************************
// Penulis: RH. Sianipar
//
// Program ini menguji pelbagai operasi pada sebuah
// senarai berantai terurut.
//**************************************************

#include <iostream> 
#include "senaraiBerantaiTakTerurut.h" 

using namespace std; 

int main()
{
    senaraiBerantaiTakTerurut<int> list1; 
    int angka; 

    cout << "Baris 8: Masukkan beberapa angka diakhiri "
         << "dengan -999." << endl; 

    cin >> angka; 
    
	while (angka != -999) 
    { 
        list1.sisipAkhir(angka); 
        cin >> angka; 
    } 
    cout << endl; 

    cout << "Baris 16: list1 sebelum pengurutan penyisipan: "; 
    list1.tampil(); 
    cout << endl; 

    list1.pengurutanPenyisipanBerantai();

    cout << "Baris 20: list1 sesudah pengurutan penyisipan: "; 
    list1.tampil();
    cout << endl; 

    return 0; 
}