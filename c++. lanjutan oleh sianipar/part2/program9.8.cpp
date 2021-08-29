#include<iostream>
using namespace std;

void Uji(int A, double B, char ch)
{ 
   try
   {
      if (A > 50.0)
	  {
         cout <<"A berada di luar rentang"<<endl;
         throw A; 
	  }
      if (B == 0)
	  {
         cout <<"B sama dengan nol"<<endl;
         throw B; 
	  }
      if (ch != 'D')
	  {
         cout<<"ch tidak sama dengan D"<<endl;
         throw ch; 
	  }
      else
         cout<<"Semua berada di dalam rentang. Tidak ada eksepsi yang dilempar." <<endl; 
   }

   catch (...)
   { 
      cout<<"Menangkap sebuah eksepsi"<<endl; 
   }
}

int main ()
{ 
   int A;
   double B;
   char ch;

   cout<<"Tulislah nilai A, b, dan ch: ";
   cin>>A>>B>>ch;

   Uji(A,B,ch);		//fungsi uji untuk try, throw dan catch

   return 0;
}