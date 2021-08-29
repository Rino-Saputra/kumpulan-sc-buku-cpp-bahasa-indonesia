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
   int m = 2;
}

namespace NS1
{
   int k = 2;
   double R = n*m*k;
}

namespace NS2
{
   double k = 3.0 ;
   double R = n*m*k;
}

int main()
{
   using NS1::R;	//aplikasi dari using
   cout<<"R dari NS1 = "<<R<<endl;

   using NS1::k;	//aplikasi dari using
   cout<<"k dari NS1 = "<<k<< endl;
   cout<<"m dari NS2 = "<<NS2::m<< endl;

   using NS1::m;	//aplikasi dari using
   cout<<"m dari NS1 = "<<m<<endl;
   cout<<"R dari NS2 = "<<NS2::R<< endl;

   return 0 ;
}