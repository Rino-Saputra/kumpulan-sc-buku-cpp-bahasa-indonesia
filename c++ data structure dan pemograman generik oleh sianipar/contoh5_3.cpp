//*******************************************************************
// Penulis: RH. Sianipar
//
// Program ini menguji berbagai operasi dari sebuah tumpukan berantai.
//*******************************************************************

#include <iostream>
#include "tipeTumpukanBerantai.h"

using namespace std;

void ujiSalin(tipeTumpukanBerantai<int> OTumpukan);

int main()
{
    tipeTumpukanBerantai<int> tumpukan;
    tipeTumpukanBerantai<int> tumpukanLain;
    tipeTumpukanBerantai<int> tumpukanBaru;

    //Menambahkan elemen-elemen ke tumpukan
    tumpukan.push(34);
    tumpukan.push(43);
    tumpukan.push(27);

    //Menggunakan operator penugasan untuk menyalin elemen-elemen
    //dari tumpukan ke tumpukanBaru
    tumpukanBaru = tumpukan;

	cout << "Setelah operator penugasan, tumpukanBaru: "
         << endl;

	//Menampilkan elemen-elemen tumpukanBaru
    while (!tumpukanBaru.apaTumpukanKosong())
	{
        cout << tumpukanBaru.top() << endl;
        tumpukanBaru.pop();
	}

	//Menggunakan operator penugasan untuk menyalin elemen-elemenn
    //dari tumpukan ke tumpukanLain
    tumpukanLain = tumpukan;

    cout << "Menguji konstruktor penyalin." << endl;

	ujiSalin(tumpukanLain);

	cout << "Setelah konstruktor penyalin dieksekusi, tumpukanLain: " << endl;

	while (!tumpukanLain.apaTumpukanKosong())
	{
        cout << tumpukanLain.top() << endl;
        tumpukanLain.pop();
	}

    return 0;
}

//Fungsi untuk menguji konstruktor penyalin
void ujiSalin(tipeTumpukanBerantai<int> OTumpukan)
{
    cout << "Tumpukan pada fungsi ujiSalin:" << endl;

    while (!OTumpukan.apaTumpukanKosong())
	{
        cout << OTumpukan.top() << endl;
        OTumpukan.pop();
	}
}