#include <iostream>
using namespace std;

int main()
{ 
   int Angka[4] = {20, 30, 10, 15};

   cout<<"Alamat dari array adalah: ";
   cout<<Angka <<"\n";

   cout<<"Alamat dari empat elemen array tersebut adalah: "<<endl;
   cout<<Angka <<", "<<Angka+1 <<", "<<Angka+2<<", "<<Angka+3<<endl;

   return 0;
}