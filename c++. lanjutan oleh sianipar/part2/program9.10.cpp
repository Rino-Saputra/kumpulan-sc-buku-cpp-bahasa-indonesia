#include<iostream>
using namespace std;

//fungsi berikut dapat melempar int atau double
void FEksepsi(int j) throw(int, double)
{
   if (j== 1)
      throw j;
   if (j == 2)
      throw 'D';
   if(j==3)
      throw 0.8;
}

int main ()
{ 
   int n;
   
   cout<<"Masukkan sebuah nilai antara 1 sampai 3: ";
   cin>>n ;

   try{
      FEksepsi(n);
   } //akhir blok try

   catch(int) //blok penanganan eksepsi diawali di sini
   { 
      cout<<"Statemen throw int ditangkap"<<endl;
   }

   catch(double)
   { 
      cout<<"Statemen throw double ditangkap"<<endl;}

   return 0;

}