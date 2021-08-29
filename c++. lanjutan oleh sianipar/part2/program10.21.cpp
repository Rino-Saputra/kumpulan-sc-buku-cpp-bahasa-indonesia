#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   char Nama[40];
   char NoMhsw[11];
   int Usia;
   char Nilai[2];

   ofstream outfile ;

   outfile.open("Mahasiswa", ios::app); // outfile adalah nama aliran
   // "Mahasiswa" adalah nama file

   cout<<"Masukkan nilai mahasiswa: ";
   cin>> Nilai;
   outfile << Nilai;

   outfile.close();

   ifstream infile ("Mahasiswa");	//membaca aliran dari file

   cout<<"Hasil pembacaan dari file adalah: "<<endl;
   infile>>Nama;		//mengekstraksi nama dari file
   cout<<"Nama = "<<Nama<<endl;

   infile >>NoMhsw ;	//mengekstraksi nomor mahasiswa
   cout<<"Reg.No= "<<NoMhsw<<endl;

   infile >> Usia;
   cout<<"Usia = "<<Usia<<endl;		//mengekstraksi usia mahasiswa

   infile>> Nilai;
   cout<<"Nilai = "<<Nilai<<endl;

   infile.close();

   return 0;
}