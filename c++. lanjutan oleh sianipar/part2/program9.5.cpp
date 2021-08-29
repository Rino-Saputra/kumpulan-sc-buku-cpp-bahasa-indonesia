# include<iostream>
using namespace std;

class Kecuali{
   public:
      void Tampil1( )
	  {
         cout<<"Terjadi sebuah eksepsi.\nNilai yang dimasukkan untuk A adalah negatif\n";
         cout <<"Msukkan nilai positif.\n"; 
	  }

      void Tampil2 ()
	  {
         cout<<"Nilai B yang dimasukkan adalah nol. \n";
         cout<<"Masukkan sebuah nilai lebih besar dari nol.\n";
	  }
};

int main ()
{ 
   Kecuali Kec;
   int A, B ;
   double D;

   cout<<"Masukkan dua nilai: ";
   cin>> A>>B;

   try
   {
      if (B == 0)
         throw Kec ;
      else
         if (A < 0)
            throw Kec;
         else
		 {
            D = A/ double(B);
            cout<<"D = "<<D<<endl;
		 }
   }

   catch (Kecuali Kecd)
   {
      if (A < 0)
         Kecd.Tampil1();
      if (B == 0)
         Kecd.Tampil2();
   }

   return 0;
}