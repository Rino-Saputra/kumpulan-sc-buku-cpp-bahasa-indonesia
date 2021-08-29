#include <iostream>
#include <cmath>	//dicantumkan untuk fungsi-fungsi matematika
using namespace std;

int main()
{
   double x ;

   cout<<"Masukkan sebuah nilai double: "; 
   cin>>x;

   if (x<0)
   {
      cout<<"Argumen sqrt bernilai negatif"<<endl;
      cout<<"Masukkan nilai positif.\n";
      exit(0);
   }

   cout<<sqrt(x)<<endl;

   cerr.width(20);
   cerr.fill('*');
   cerr.precision(7);

   cerr<<sqrt(6.0)<<endl;

   clog<<"Akar kuadrat dari 16 adalah: "<<sqrt(16)<<endl;

   return 0;
}