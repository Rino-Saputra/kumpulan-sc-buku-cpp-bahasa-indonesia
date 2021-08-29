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

namespace NS1
{
   int k = 2;
   double R = n*m*k;
}

namespace NS2
{ 
   double k = 3.0;
   double R = n*m*k;
}

namespace ruangKu = NS1;
namespace Ruang = NS2;

int main()
{
   cout<<"R dari ruangKu = "<<ruangKu:: R<<endl;
   cout<<"k dari ruangKu = "<<ruangKu::k<<endl;

   cout<<"k dari namespace NS2 = "<<NS2::k<<endl;
   cout<<"m dari Ruang = "<<Ruang::m<<endl;

   cout<<"m dari ruangKu = "<<ruangKu::m<<endl;
   cout<<"R dari Ruang = "<<Ruang::R<<endl;

   return 0 ;
}