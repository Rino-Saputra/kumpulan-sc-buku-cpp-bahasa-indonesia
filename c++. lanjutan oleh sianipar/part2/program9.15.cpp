#include<iostream>
#include<stdexcept>
using namespace std;

void berhenti()
{ 
   cout<<"Sebuah eksepsi telah terjadi."<<endl;
   cout<<"Program dihentikan."<<endl;
   exit(1);
}

int main ()
{ 
   set_terminate(berhenti);

   try
   {
      int A;

	  cout<<"Masukkan sebuah nilai yang lebih kecil dari 60: "; 
      cin >> A;

	  if (A > 60)
         throw A;
      cout<<"Nilai yang dimasukkan adalah "<<A<<endl; 
   }

   catch (double)
   { 
      cout<<"Nilai berada di luar rentang."<<endl;
   }

   return 0;
}