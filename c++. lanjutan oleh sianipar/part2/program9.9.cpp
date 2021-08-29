#include<iostream>
using namespace std;

void FEksepsi (int j) throw () //tidak dapat melemparkan eksepsi apapun
{
   if (j== 1)
      throw j;
   if (j == 2)
      throw char();
   if (j==3)
      throw double();
}

int main ()
{
   int n;

   cout<<"Masukkan sebuah nilai antara 1 sampai 3:";
   cin>>n ;

   try{
      FEksepsi(n);
   } //akhir blok try

   catch (int) //blok penanganan eksepsi diawali di sini
   { 
      cout<<"Statemen throw int ditangkap"<<endl;
   }

   catch(double)
   { 
      cout<<"Statemen throw double ditangkap"<<endl;}

   return 0;
}