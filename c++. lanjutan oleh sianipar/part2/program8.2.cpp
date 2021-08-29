#include <iostream>
#include <string>
using namespace std;

int main()
{
   string Str1, Str2, Str3, Str4 ;

   Str1 = "Jakarta";
   Str2 = "Bandung";

   Str3 = "Bandung";
   Str4 = "ZA";

   cout<<"Str1 = "<<Str1<<", Str2 = "<<Str2<<endl;
   cout<<"Str3 = "<<Str3<<", Str4 = "<<Str4<<endl;

   cout<<"Str1.compare (Str2) = "<<Str1.compare(Str2)<<endl;
   cout<<"Str2.compare (Str3) = "<<Str2.compare(Str3)<<endl;

   cout<<"Str4.compare (Str2) = "<<Str4.compare(Str2)<<endl;
   cout<<"Str3.compare (Str4) = "<<Str3.compare(Str4)<<endl;

   return 0;
}