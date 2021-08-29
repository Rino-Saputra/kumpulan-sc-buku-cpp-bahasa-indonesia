//***********************************************************
// Penulis: RH. Sianipar
//
// Program ini menguji pelbagai operasi pada sebuah tumpukan.
//***********************************************************
#include <iostream>
#include "tipeTumpukan.h"

using namespace std;

void ujiKonstruktorPenyalin(tipeTumpukan<int> tumpukanLain);

int main()
{
    tipeTumpukan<int> tumpukan(50);
    tipeTumpukan<int> salinTumpukan(50);
    tipeTumpukan<int> tumpukanDummy(100);

	tumpukan.inisialisasiTumpukan();
    tumpukan.push(23);
    tumpukan.push(45);
    tumpukan.push(38);
    salinTumpukan = tumpukan; //menyalin tumpukan ke salinTumpukan

	cout << "Elemen-elemen salinTumpukan: ";
  
	while (!salinTumpukan.apaTumpukanKosong()) //menampilkan salinTumpukan
	{
        cout << salinTumpukan.top() << " ";
        salinTumpukan.pop();
	}
    cout << endl;

	salinTumpukan = tumpukan;
    ujiKonstruktorPenyalin(tumpukan); //menguji konstruktor penyalin

	if (!tumpukan.apaTumpukanKosong())
        cout << "Tumpukan asli tidak kosong." << endl
             << "Elemen teratas tumpukan asli: "
             << salinTumpukan.top() << endl;

    tumpukanDummy = tumpukan; //menyalin tumpukan ke tumpukanDummy
    
	cout << "Elemen-elemen tumpukanDummy: ";

	while (!tumpukanDummy.apaTumpukanKosong()) //menampilkan tumpukanDummy
	{
        cout << tumpukanDummy.top() << " ";
        tumpukanDummy.pop();
	}

	cout << endl;

	return 0;
}

void ujiKonstruktorPenyalin(tipeTumpukan<int> tumpukanLain)
{
    if (!tumpukanLain.apaTumpukanKosong())
        cout << "tumpukanLain tidak kosong." << endl
             << "Elemen teratas tumpukanLain: "
             << tumpukanLain.top() << endl;
}

