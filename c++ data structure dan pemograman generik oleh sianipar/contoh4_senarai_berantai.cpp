//**************************************************
// Penulis: RH. Sianipar
//
// Program ini menguji pelbagai operasi pada sebuah
// senarai berantai terurut.
//**************************************************

#include <iostream> 
#include "senaraiBerantaiTerurut.h" 

using namespace std; 

int main()
{
    senaraiBerantaiTerurut<int> list1, list2; 
    int angka; 

    cout << "Baris 7: Masukkan beberapa angka diakhiri "
         << "dengan -999." << endl; 

    cin >> angka; 
    
	while (angka != -999) 
    { 
        list1.sisip(angka); 
        cin >> angka; 
    } 
    cout << endl; 

    cout << "Baris 15: list1: "; 
    list1.tampil(); 
    cout << endl; 

    list2 = list1; //menguji operator penugasan

    cout << "Baris 19: list2: "; 
    list2.tampil();
    cout << endl; 

    cout << "Baris 22: Masukkan angka yang akan "
         << "dihapus: "; 
    cin >> angka; 
    cout << endl; 

    list2.hapusSimpul(angka); 
    
    cout << "Baris 26: Setelah penghapusan "
         << angka << ", list2: " << endl; 
    list2.tampil(); 
    cout << endl; 

    return 0; 
}