//Program untuk menghitung rerata skor ujian.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    ifstream inFile; //variabel aliran masukan
    ofstream outFile; //variabel aliran keluaran

    double test1, test2, test3, test4, test5;
    double rerata;

    string namaPertama;
    string namaAkhir;

    inFile.open("test.txt"); //membuka file masukan

    if (!inFile)
	{
        cout << "Tidak dapat membuka file masukan. "
             << "Program berhenti." << endl;

        return 1;
	}

    outFile.open("testavg.out"); //membuka file keluaran

    outFile << fixed << showpoint;
    outFile << setprecision(2);

    cout << "Pemrosesan data" << endl;

    inFile >> namaPertama >> namaAkhir;
    outFile << "Nama mahasiswa: " << namaPertama
            << " " << namaAkhir << endl;

    inFile >> test1 >> test2 >> test3
           >> test4 >> test5;
    outFile << "Skor ujian: " << setw(4) << test1
            << setw(4) << test2 << setw(4) << test3
            << setw(4) << test4 << setw(4) << test5
            << endl;

    rerata = (test1 + test2 + test3 + test4 + test5) / 5.0;

    outFile << "Rerata skor ujian: " << setw(6)
            << rerata << endl;

    inFile.close();
    outFile.close();

    return 0;
}