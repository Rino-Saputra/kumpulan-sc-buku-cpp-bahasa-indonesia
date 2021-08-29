#include <iostream>
using namespace std;

namespace NS1
{ 
   int n = 3;
   float m = 2.5;

   namespace NS2 // NS2 dideklarasikan di dalam NS1
   { 
      float n = 4.0;
      int m = 2;
   }
}

namespace NS3
{ 
   int k = 2;
   double R = NS1::NS2::n * NS1::m * NS3::k;	//menggunakan variabel-variabel dari
													//namespace-namespace berbeda
   namespace NS4 //NS4 dideklarasikan di dalam NS3
   {
      double k = 3.0; 
   }
}

int main()
{ 
   cout<<"R dari NS1 = "<<NS3::R<<endl;
   cout<<"k dari NS4 = "<<NS3::NS4::k<<endl;

   cout<<"m dari NS2 = "<<NS1::NS2::m<<endl;
   cout<<"m dari NS1 = "<<NS1::m<<endl;

   return 0 ;
}