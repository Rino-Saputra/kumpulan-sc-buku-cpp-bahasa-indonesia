// Program ini mengilustrasikan bagaiman membaca string dan data numerik.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string namaPertama; //Baris 1
    string namaAkhir; //Baris 2
    int usia; //Baris 3
    double berat; //Baris 4

	cout << "Masukkan nama pertama, nama akhir, usia, "
         << "dan berat, dipisahkan dengan koma."
         << endl; //Baris 5

	cin >> namaPertama >> namaAkhir; //Baris 6
    cin >> usia >> berat; //Baris 7

	cout << "Nama: " << namaPertama << " "
         << namaAkhir << endl; //Baris 8

	cout << "Usia: " << usia << endl; //Baris 9
    cout << "Berat: " << berat << endl; //Baris 10

    return 0; //Baris 11
}