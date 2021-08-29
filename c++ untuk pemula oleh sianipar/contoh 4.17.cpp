//Program untuk menentukan penjumlahan atas n integer positif pertama.

#include <iostream>

using namespace std;

int main()
{
    int kounter; //variabel kendali loop
    int jum; //variabel untuk menyimpan penjumlahan
    int n; //variabel untuk menyimpan jumlah angka 
           //positif yang akan dijumlahkan
    
	cout << "Baris 1: Masukkan jumlah integer "
         << "positif yang akan ditambahkan: "; //Baris 1
    cin >> n; //Baris 2

    jum = 0; //Baris 3
    cout << endl; //Baris 4

    for (kounter = 1; kounter <= n; kounter++) //Baris 5
        jum = jum + kounter; //Baris 6
    cout << "Baris 7: Penjumlahan atas " << n
         << " integer positif pertama adalah " << jum
         << endl; //Baris 7

    return 0;
}