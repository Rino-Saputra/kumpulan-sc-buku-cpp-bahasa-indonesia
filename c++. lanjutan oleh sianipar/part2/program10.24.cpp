#include <fstream>
#include <iostream>
using namespace std;

class ObNilai
{
   private:
      char Nama[30];
      int NoMhsw;
      char nilai;

   public:
      void Baca()
	  {
         cout<<"Masukkan nama mahasiswa: ";
         cin>>Nama;

         cout<<"Masukkan nomor mahasiswa: ";
         cin>>NoMhsw;

         cout<<"Masukkan nilai: ";
         cin>>nilai;
	  }

      void Tulis()
	  {
         cout.width(27);
         cout.setf(ios::left);

         cout<<Nama;
         cout.width(10);
         cout.setf(ios::left);

         cout<<NoMhsw;
         cout.width(2);
         cout.setf(ios::left);

         cout<<nilai<<endl;
	  }
};

int main ()
{
   ifstream infile ("STDfile");
   ofstream outfile ("STDfile");

   cout<<"Masukkan nama, no.mhsw, dan nilai: \n";
   ObNilai Nil[4];

   for (int j=0; j<4; j++ )
   {
      Nil[j].Baca();
      outfile.write((char*) & Nil[j], sizeof(Nil[j]));
   }

   outfile.close();

   cout<<"\nDaftar nilai mahasiswa\n";
   cout<<"Nama \t\t NoMhsw\t Nilai"<<endl;
   for (int i =0; i<4;i++)
   { 
      infile.read((char*)& Nil[i], sizeof(Nil[i]));
      Nil[i].Tulis();
   }

   infile.close();

   return 0;
}