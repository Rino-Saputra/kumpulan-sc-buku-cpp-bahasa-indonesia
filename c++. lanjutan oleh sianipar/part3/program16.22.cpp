#include<iostream>
# include<algorithm>
using namespace std;

int main()
{
   char S1[] = "AA";
   char S2[] ="ZZ";
   char B[] = "hitung";
   char C[] ="hitungan";

   bool b1 =lexicographical_compare(S1, S1+1, S2, S2+1);
   cout<<"b1 = "<< b1<<endl;

   bool b2 =lexicographical_compare(S2, S2+1 ,S1, S1+1 );
   cout<<"b2 = "<< b2<<endl;

   bool b3 = lexicographical_compare(S1, S1+1, S1, S1+1);
   cout<<"b3 = "<<b3<<endl;

   bool b4 = lexicographical_compare(B, B+6, C, C+9);
   cout<<"b4 = "<< b4<<endl;

   return 0 ;
}