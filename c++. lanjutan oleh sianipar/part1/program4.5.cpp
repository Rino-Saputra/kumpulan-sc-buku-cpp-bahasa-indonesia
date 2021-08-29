#include <iostream.h>
const int n = 5;

class List{
   friend ostream & operator << (ostream &, List &);
   friend istream & operator >> (istream &, List &);
   float x[n] ;		//private secara default

   public :
      List(){};		//konstruktor default
		
	  List(float a[n]) //konstruktor
	  {
         for (int i =0; i<5; i++)
         x[i] = a[i];
	  }

      float operator /=(int m) //pembebanan operator /=
	  { 
         for ( int i =0; i<5; i++)
            x[i] = x[i]/m;
         return x[i];
	  }
} ; //akhir dari kelas List

istream & operator>> (istream &Masuk, List&L) //definisi fungsi friend
{ 
   for (int i = 0; i< n; i++) 
      Masuk >> L.x[i];			//Masuk adalah sebuah objek dari istream
   return Masuk;
} //L adalah  sebuah objek dari List

ostream & operator<< (ostream &Keluar, List &L) //definisi fungsi friend
{
   Keluar<<"("<<L.x[0]; 
   for (int i = 1; i<n; i++)	//Keluar adalah sebuah objek dari ostream
      Keluar<<", "<< L.x[i];

   Keluar<<")";
   return Keluar;
}

int main()
{
   List L1, L2;

   float B[n] ={2.2,3.3,4.4,5.5,6.6};

   cout<<"Tuliskan "<<n<<" buah elemen dari L2: ";
   cin>>L2;

   L1 = B ;
   L1 /=2;

   cout<<L1<<"\n";
   L2 /=3;

   cout<<L2 <<endl;

   return 0;
}