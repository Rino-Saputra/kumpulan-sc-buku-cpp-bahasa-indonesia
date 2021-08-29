#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   char Nama[40];
   char NoMhs[11];
   int Usia;

   ofstream ke_file;
   ke_file.open("Mahasiswa"); // ke_file adalah nama dari objek stream,
   //yang membuka file dengan nama "Mahasiswa"

   cout<<"Masukkan nama mahasiswa: ";
   cin.getline(Nama, 40);
   ke_file<<Nama<<"\n";		//merekam nama mahasiswa di dalam file

   cout<<"Masukkan nomor mahasiswa: ";
   cin.getline (NoMhs, 10);
   ke_file<<NoMhs<<"\n";	//menerakam nomor mahasiswa

   cout<<"Masukkan usia mahasiswa: ";
   cin>>Usia;
   ke_file<<Usia<<"\n";		//merekam usia mahasiswa

   ke_file.close();

   ifstream From_file ("Mahasiswa");	//aliran masukan dari file
   From_file>>Nama ;		//mengekstraksi nama dari file
   
   cout<<"Yang di baca dari file: "<<endl;
   cout<<"Nama = "<<Nama<<endl;

   From_file >>NoMhs;		//mengekstraksi nomor mahasiswa
   cout<<"No. Mhsw = "<<NoMhs<<endl;

   cout<<"Usia = "<<Usia<<endl; //mengekstraksi usia mahasiswa

   From_file.close();

   return 0 ;
}