//**************************************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana menggunakan kelas tipeSenaraiArray.
//**************************************************************************

#include <iostream>

#include <string>
#include "tipeSenaraiArray.h"

using namespace std;

int main()
{
    tipeSenaraiArray<int> intList(100);
	tipeSenaraiArray<string> stringList;

	int angka;

	cout << "Baris 10: Masukkan 5 integer: ";

	for (int kounter = 0; kounter < 5; kounter++)
	{
		cin >> angka;
		intList.sisipPada(kounter, angka);

	}

	cout << endl;
	cout << "Baris 19: Senarai yang Anda masukkan adalah: ";
	intList.tampil();
	cout << endl;

	cout << "Baris 20: Masukkan item yang akan dihapus: ";
	cin >> angka;
	intList.hapus(angka);

	cout << "Baris 23: Setelah penghapusan " << angka
         << ", senarai adalah:" << endl;
	intList.tampil();
	cout << endl;

	string str;

	cout << "Baris 27: Masukkan 5 string: ";

	for (int kounter1 = 0; kounter1 < 5; kounter1++)
	{
		cin >> str;
		stringList.sisipPada(kounter1, str);
	}

	cout << endl;
	cout << "Baris 34: Senarai yang Anda masukkan adalah: " << endl;
	stringList.tampil();
	cout << endl;

	cout << "Baris 37: Masukkan string yang akan dihapus: ";
	cin >> str;
	stringList.hapus(str);
	cout << "Baris 40: Setelah penghapusan " << str
         << ", senarai adalah:" << endl;
	stringList.tampil();
	cout << endl;

	return 0;
}







