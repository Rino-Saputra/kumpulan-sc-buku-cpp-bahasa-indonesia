#include<iostream>
using namespace std;

int main()
{
   double D;

   cout<<"Status awal dari aliran: "<<endl;

   cout<<"cin.bad = "<<cin.bad()<<endl;
   cout<<"cin.good = "<<cin.good<<endl;

   cout<<"cin.fail= "<<cin.fail()<<endl;
   cout<<"cin.eof = "<<cin.eof()<<endl;

   cout<<"Masukkan nilai D: ";
   cin>>D;

   cout<<"User telah memasukkan sebuah string untuk nilai D (seharusnya double)."<<endl;
   cout<<"Status aliran setelah masukan tersebut"<<endl;

   cout<<"cin.bad = "<<cin.bad()<<endl; 
   cout<<"cin.good = "<<cin.good<<endl;

   cout<<"cin.fail= "<<cin.fail()<<endl;
   cout<<"cin.eof = "<<cin.eof()<<endl;

   cin.clear();

   cout<<"Setelah menerapkan fungsi clear(): "<<endl;

   cout<<"cin.bad = "<<cin.bad()<<endl;
   cout<<"cin.good = "<<cin.good<<endl;

   cout<<"cin.fail= "<<cin.fail()<<endl;
   cout<<"cin.eof = "<<cin.eof()<<endl;

   return 0;
}