//***************************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana menggunakan kelas
// tipeAntrianBerantai di dalam sebuah program.
//***************************************************************

#include <iostream>
#include "tipeAntrianBerantai.h"

using namespace std;

int main()
{
    tipeAntrianBerantai<int> antrian;
    int x, y;

    antrian.inisialisasiAntrian();
    x = 4;
    y = 5;
    antrian.tambahAntrian(x);
    antrian.tambahAntrian(y);
    x = antrian.depan();
    antrian.hapusAntrian();
    antrian.tambahAntrian(x + 5);
    antrian.tambahAntrian(16);
    antrian.tambahAntrian(x);
    antrian.tambahAntrian(y - 3);

    cout << "Elemen-elemen antrian: ";
    
	while (!antrian.apaAntrianKosong())
    {
        cout << antrian.depan() << " ";
        antrian.hapusAntrian();
    }
    cout << endl;

    return 0;
}