#include <iostream>
using namespace std;

namespace namespace_programKu
{ 
   int n = 3;
   float m = 2.5;
   int k = 2;
   double R = n*m*k;
}

namespace namespaceKu
{
   float n = 4.0;
   int m = 2 ;
   double k = 3.0 ;
   double R = n*m*k;
}

int main()
{
   namespace NS1= namespace_programKu ;
   //NS1 adalah alias untuk namespace_programKu

   namespace NS2 = namespaceKu ; // NS2 adalah alias untuk namespaceKu

   cout<<"R di dalam namespace_programKu = "<<NS1::R<<", \tn di dalam NS1 = "<<NS1::n<<endl;
   cout<<"R di dalam namespaceKu = "<<NS2::R<<", \tn di dalam NS2 = "<<NS2::n <<endl;
   cout<<"m di dalam namespace_programKu = "<<NS1::m<<", \tm di dalam NS2 = "<<NS2::m<<endl;

   return 0 ;
}