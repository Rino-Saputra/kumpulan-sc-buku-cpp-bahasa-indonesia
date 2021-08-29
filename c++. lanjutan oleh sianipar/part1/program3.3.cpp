#include <iostream>
using namespace std;

class Persegi;	//pra-deklearasi dari kelas
class Rekt {	//kelas Rekt
   int x,y;		//private secara default

   public:
   Rekt(int A, int B) {x = A, y = B;}

   int Luas()
   {return x*y;}

   friend void Tampil(Rekt R, Persegi S); //fungsi friend untuk Rekt
}; //akhir dari kelas Rekt

class Persegi { //kelas Persegi
   int sisi;	//private secara default

   public:
      Persegi (int C){sisi = C;}

      int Luas ()
	  {return sisi*sisi;}

      friend void Tampil(Rekt R, Persegi S); //fungsi friend untuk Persegi
}; //akhir dari kelas Persegi

void Tampil(Rekt R, Persegi S) //definisi dari fungsi friend 
{
   cout<<"Luas dari Rektangular = "<<R.Luas()<<endl;
   cout<<"Luas dari Persegi = "<<S.Luas()<< endl;
}

int main()
{
   Rekt R1(10, 5);
   Persegi S1(10);

   Tampil(R1, S1);

   return 0;
}