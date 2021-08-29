#include<iostream>
using namespace std;

void LemparUlang(int A) //definisi dari fungsi LemparUlang()
{
   try
   { 
      int B;

      cout<<"Masukkan sebuah nilai positif: "; 
	  cin>> B ;

	  if (B<=0)
         throw B;
   }

   catch (int)
   { 
      cout<<"Blok catch ini di dalam fungsi LemparUlang."<<endl;
      throw; //LemparUlang kedua
   }
}

int main ()
{
   try{
      try {
         LemparUlang(6);
	  }

      catch(int)
	  { 
         cout<<"Blok catch ini adalah blok catch dalam di dalam main."<<endl;
         throw; // LemparUlang kedua
	  }
   }

   catch(int)
   {
      cout<<"Blok catch ini adalah blok catch luar di dalam main."<<endl;
   }

   return 0;
}