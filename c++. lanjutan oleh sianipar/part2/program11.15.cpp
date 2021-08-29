#include <iostream>
using namespace std;

int main()
{
   int jum = 0;

   for (int i = 0 ; i<6; i++)
      jum +=i;

   cout<<"jum = "<<jum<<endl;

   cout<<"Nomor baris = "<<__LINE__ <<endl;

   cout<<"Tanggal penulisan program: "<<__DATE__<<endl;
   cout<<"Waktu kompilasi: "<<__TIME__<< endl;

   cout<<"Nama file = "<< __FILE__<<endl;
   cout<<"Nilai dari cplusplus "<<__cplusplus<<endl;

   return 0;
}