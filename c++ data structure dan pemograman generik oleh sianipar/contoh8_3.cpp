//**************************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana melewatkan sebuah fungsi
// sebagai parameter kepada algoritma penjelajah pohon.
//**************************************************************

#include <iostream> 
#include "tipePohonPencarianb.h" 

using namespace std; 

void tampil(int& x); 
void perbarui(int& x); 

int main() 
{ 
    tipePohonPencarianb<int> akarPohon; 

    int angka; 

    cout << "Baris 10: Masukkan beberapa angka diakhiri dengan -999"
         << endl; 
    cin >> angka;
	
    while (angka != -999) 
	{ 
        akarPohon.sisip(angka); 
        cin >> angka; 
	} 

    cout << endl << "Baris 17: Simpul-simpul pohon dengan tatanan inorder: "; 
    akarPohon.penjelajahanInorder(tampil);

    cout << endl << "Baris 19: Simpul-simpul pohon dengan tatanan preorder: "; 
    akarPohon.penjelajahanPreorder(tampil);

	cout << endl << "Baris 21: Simpul-simpul pohon dengan tatanan postorder: "; 
    akarPohon.penjelajahanPostorder(tampil);

    cout << endl << "Baris 23: Tinggi Pohon: "
         << akarPohon.tinggiPohon()
         << endl << endl;

    cout << "Baris 25: ******* Pembaruan Simpul-Simpul *******"
         << endl; 

    akarPohon.penjelajahanPreorder(perbarui); 

    cout << "Baris 27: Simpul-simpul pohon dalam tatanan preorder setelah "
         << "pembaruan: " << endl << " ";
	
    akarPohon.penjelajahanInorder(tampil); 
    cout << endl <<"Baris 28: Tinggi Pohon: "
         << akarPohon.tinggiPohon() << endl; 

    return 0; 
} 

void tampil(int& x) 
{
    cout << x << " "; 
}
 
void perbarui(int& x) 
{ 
    x = 2 * x; 
} 
