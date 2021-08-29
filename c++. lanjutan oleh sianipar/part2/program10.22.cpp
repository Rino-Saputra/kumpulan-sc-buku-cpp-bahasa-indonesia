#include <fstream>
#include <iostream>
using namespace std;

int main ()
{ 
   ofstream outfile("Mfile");

   outfile<<"Kristof! Belajar pointer file C++\n"; //menuliskan ke file
   
   outfile.close();

   char str [80];

   ifstream infile ("Mfile");
   infile.getline(str,80);	//membaca file
   cout<<str <<endl<<endl;	//menampilkan pada monitor

   infile.close();			//menutup file

   infile.open ("Mfile", ios::in); //membuka file untuk pembacaan
   int g = infile.tellg();	//memberitahu posisi dari pointer get
   cout<<"Pointer pada posisi g = "<<g<<endl;
   //menampilkan posisi pointer

   outfile.open("Mfile", ios::app); //membuka file untuk penulisan di akhir

   outfile<<"yang menenentukan posisi di dalam file"; //menambahkan baris ini
   int p = outfile.tellp(); //memberitahu posisi dari pointer put.
   cout<<"Pointer berada pada posisi p = "<<p<<endl;

   infile.getline(str,80);	//membaca baris pertama
   cout<<str<<endl;

   infile.getline(str,80);	//membaca baris berikutnya
   cout<<str<<endl;

   outfile.seekp(5, ios::beg );		//pindah 5 byte dari awal file

   int n = outfile.tellp(); //memberitahu posisi pointer
   cout<<"Pointer berada pada posisi n = "<<n<<endl;

   outfile.seekp(-3, ios::cur ); //mundur sejauh 3 byte

   int m = outfile.tellp(); //memberitahu posisi pointer
   cout<<"Pointer berada pada posisi m = "<<m<<endl;

   outfile.close();

   infile.seekg(6, ios::end ); //mundur 6 byte dari akhir file
   
   int a = infile.tellg();	//memberitahu posisi pointer
   cout<<"Pointer berada pada posisi a = "<<a<<endl;

   outfile.close();
   infile.close();

   return 0;
}