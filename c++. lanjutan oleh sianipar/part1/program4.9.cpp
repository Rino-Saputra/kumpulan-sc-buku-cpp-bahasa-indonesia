#include <iostream.h>
#include <cstdlib>

const int n = 5;

class List 
{
   friend ostream & operator << (ostream & , List &);
   int x[n] ; //private secara default

   public :
      void set_nilai(int a[n])
	  {
         for (int j = 0; j< n; j++)
            x[j] = a[j]; 
	  }

      int operator [](int k)
	  { 
         if (k <0 || k > n)
		 { 
            cout<<"Indeks array k di luar rentang"<<endl;
            exit(0);
		 }

         return x[k];
	  }
}; //akhir dari kelas List

ostream & operator<< (ostream &Taruh , List &L)
{
   Taruh<<"Komponen-komponen adalah: ("<<L.x[0];
   for ( int i = 1; i<n; i++)
      Taruh<<", "<< L.x[i] ;

   Taruh<<")";
   return (Taruh);
}

int main()
{
   List L1;
   int B1[] = {11, 12, 13, 14, 15};

   L1.set_nilai(B1);
   cout<<L1<<endl;

   cout<<L1[2]<<endl;
   cout<<"Hasil berikut adalah untuk L1[7]: "<<endl;
   cout<<L1[7]<<endl;

   return 0;
}