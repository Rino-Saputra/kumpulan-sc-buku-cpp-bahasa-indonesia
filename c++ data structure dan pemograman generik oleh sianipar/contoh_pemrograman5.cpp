//*************************************************************
// Penulis: RH Sianipar
//
// Program membaca sebuah file data yang memuat IPK mahasiswa
// diikuti dengan nama mahasiswa. Program kemudian menampilkan
// IPK tertinggi dan nama-nama dengan IPK tertinggi.
//*************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

#include "tipeTumpukan.h"

using namespace std;

int main()
{
    //langkah 1
    double IPK;
    double IPKTertinggi;
    string nama;

    tipeTumpukan<string> tumpukan(100);
    
	ifstream infile;

	infile.open("DataIPKTertinggi.txt"); //langkah 2

	if (!infile) //langkah 3
	{
        cout << "File masukan tidak ada. "
             << "Program berhenti!" << endl;
        return 1;
	}

	cout << fixed << showpoint; //langkah 4
    cout << setprecision(2);    //langkah 4

	infile >> IPK >> nama; //langkah 5

	IPKTertinggi = IPK;    //langkah 6
    
	while (infile)         //Step 7
	{
        if (IPK > IPKTertinggi) 
		{
            tumpukan.inisialisasiTumpukan(); 

            if (!tumpukan.apaTumpukanPenuh())
                tumpukan.push(nama);

			IPKTertinggi = IPK; 
		}
        
		else if (IPK == IPKTertinggi) 
        if (!tumpukan.apaTumpukanPenuh())
            tumpukan.push(nama);
        else
		{
            cout << "Tumpukan overflow. "
                 << "Program berhenti!" << endl;
            return 1; //keluar program
		}

		infile >> IPK >> nama; 
	}

	cout << "IPK Tertinggi = " << IPKTertinggi << endl;
    cout << "Mahasiswa yang memiliki "
         << "IPK tertinggi adalah:" << endl;

	while (!tumpukan.apaTumpukanKosong()) 
	{
        cout << tumpukan.top() << endl;
        tumpukan.pop();
	}

	cout << endl;

	return 0;
}