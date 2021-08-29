#include <iostream>
using namespace std;

int main()
{ 
   cout.put('M').put('E').put('D').put('A').put('N').put('\n');

   char* Nama = "Jakarta";

   cout<<Nama<<endl;	//keluarannya adalah Jakarta
   cout.put(*Nama);		//keluarannya adalah satu karakter J
   cout<<"\n";

   char string[] = "Medan";

   for (int i = 0; i<5; i++)
      cout.put(string [i]);
   cout.put('\n');

   cout.put(70)<<endl;	//keluarannya adalah karakter F

   return 0;
}