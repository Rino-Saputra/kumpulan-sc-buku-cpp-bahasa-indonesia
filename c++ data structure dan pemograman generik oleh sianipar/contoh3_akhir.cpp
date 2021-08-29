//****************************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaiman menggunakan kelas 
// tipeMtKuliah, tipeMahasiswa, dan vector.
//****************************************************************

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>

#include "tipeMahasiswa.h"

using namespace std;

void getDataMahasiswa(ifstream& infile,
                      vector<tipeMahasiswa> &mahasiswaList);

void tampilLaporanNilai(ofstream& outfile,
                        vector<tipeMahasiswa> mahasiswaList,
                        double biayaPerSKS);

int main()
{
    vector<tipeMahasiswa> mahasiswaList;
    double biayaPerSKS;
    ifstream infile;
    ofstream outfile;
    
    infile.open("stData.txt");

    if (!infile)
    {
        cout << "File masukan tidak ada. "
             << "Program berhenti." << endl;

        return 1;
    }

    outfile.open("stDataOut.txt");
    
    infile >> biayaPerSKS; //mendapatkan biaya per SKS
    
    getDataMahasiswa(infile, mahasiswaList);
    tampilLaporanNilai(outfile, mahasiswaList, biayaPerSKS);

    return 0;
}

void getDataMahasiswa(ifstream& infile,
                      vector<tipeMahasiswa> &mahasiswaList)
{
    //variabel lokal
    string fNama;    //variabel untuk menyimpan nama pertama
    string lNama;    //variabel untuk menyimpan nama akhir
    int NIP;         //variabel untuk menyimpan NIP mahasiswa
    int jumlahMtKuliah;  //variabel untuk menyimpan jumlah matakuliah
    char apaDibayar; //variabel untuk menyimpan Y/T, yaitu
                     //apakah uang kuliah sudah dibayarkan

    bool apaUangKuliahDibayar; //variabel untuk menyimpan true/false

    string cNama; //variabel untuk menyimpan nama matakuliah
    string cNo;   //variabel untuk menyimpan nomor matakuliah
    int kredit;   //variabel untuk menyimpan SKS
    char nilai;   //variabel untuk menyimpan nilai matakuliah

    vector<tipeMtKuliah> kuliah; //vektor dari objek-objek untuk menyimpan
                                 //informasi matakuliah
    tipeMtKuliah cTemp;
    tipeMahasiswa sTemp;

    infile >> fNama;                                                  //langkah 1

    while (infile)
    {
        infile >> lNama >> NIP >> apaDibayar;                         //langkah 1

        if (apaDibayar == 'Y')                                        //langkah 2
            apaUangKuliahDibayar = true;
        else
            apaUangKuliahDibayar = false;

        infile >> jumlahMtKuliah;                                     //langkah 3
        kuliah.clear();

        for (int i = 0; i < jumlahMtKuliah; i++)                      //langkah 4
        {
            infile >> cNama >> cNo >> kredit >> nilai;                //langkah 4.a
            cTemp.setInfoMtKuliah(cNama, cNo,
                                  nilai, kredit);                     //langkah 4.b

            kuliah.push_back(cTemp);                                  //langkah 4.c
        }

        sTemp.setInfo(fNama, lNama, NIP, apaUangKuliahDibayar,
                      kuliah);                                        //langkah 5
        mahasiswaList.push_back(sTemp);                               //langkah 6
        infile >> fNama; 					  	     //langkah 1
    }//akhir while  
}

void tampilLaporanNilai(ofstream& outfile,
                       vector<tipeMahasiswa> mahasiswaList,
                       double biayaPerSKS)
{
    for (int kount = 0; kount < mahasiswaList.size(); kount++)
        mahasiswaList[kount].tampil(outfile, biayaPerSKS);
}
