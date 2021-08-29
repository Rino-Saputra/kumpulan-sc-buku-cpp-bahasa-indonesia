//************************************************************
// Program: Menghitung, jumlah angka nol, ganjil, dan genap
// Program ini menghitung jumlah angka ganjil dan angka genap.
// Program juga menghitung angka nol.
//************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

const int N = 20;

int main()
{
    //Mendeklarasikan variabel-variabel
    int kounter; //variabel kendali loop
    int angka; //variabel untuk menyimpan angka baru
    int nol = 0; //Langkah 1
    int ganjil = 0; //Langkah 1
    int genap = 0; //Langkah 1

    cout << "Silahkan masukkan " << N << " buah integer, "
         << "positif, negatif, atau nol."
         << endl; //Langkah 2

    cout << "Angka-angka yang Anda masukkan adalah:" << endl;

    for (kounter = 1; kounter <= N; kounter++) //Langkah 3
	{
        cin >> angka; //Langkah 3a
        cout << angka << " "; //Langkah 3b

        //Langkah 3c
        switch (angka % 2)
		{
            case 0:
                genap++;
                if (angka == 0)
                   nol++;
                   break;
            case 1:
            case -1:
                ganjil++;
		} //akhir switch
	} //akhir loop for 

    cout << endl;

    //Langkah 4
    cout << "Ada " << genap << " angka genap, "
         << "yang termasuk " << nol << " nol."
         << endl;

    cout << "Jumlah angka ganjil adalah: " << ganjil
         << endl;

    return 0;
}