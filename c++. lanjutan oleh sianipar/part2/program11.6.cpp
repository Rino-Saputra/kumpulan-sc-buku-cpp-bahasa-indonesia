#include <iostream>
using namespace std;

namespace NS1
{ 
   int n = 3;
   float m = 2.5;
}

namespace NS2
{ 
   float n = 4.0;
   int m = 2 ;
}

namespace NS1 //menggunakan NS1 kembali
{ 
   int k = 2;
   double R = n*m*k;
}

namespace NS2 //menggunakan NS2 kembali
{
   double k = 3.0 ;
   double R = n*m*k; 
}

int main()
{ 
   cout<<"R dari NS1 = "<<NS1:: R<<endl;
   cout<<"k dari NS1 = "<<NS1::k<< endl;

   cout<<"m dari NS2 = "<<NS2::m<< endl;
   cout<<"m dari NS1 = "<< NS1 ::m<<endl;

   cout<<"R dari NS2 = "<<NS2::R<<endl;

   return 0 ;
}