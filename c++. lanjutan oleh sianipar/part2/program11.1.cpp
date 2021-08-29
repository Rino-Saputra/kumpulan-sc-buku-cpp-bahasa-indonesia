#include <iostream>
using namespace std;

namespace S1  // name namespace S1
{
   int a = 8;			//variabel int yang didefinisikan di dalam namespace S1.
   char ch = 'X';
   double b = 10.5;		//variabel double yang didefinisikan di dalam namespace S1.
   char E[] = "John"; 
}

namespace S2
{
   double a = 5.4;			//'a' sekarang double di dalam namespace S2
   char ch = 'Y';			//ch sekarang 'Y' di dalam namespace S2
   int E = 5;				//E sekarang int, sebelumnya string di dalam namespace S1
   char b[] = "Kristof";	//b sekarang string, sebelumnya double di dalam namespace S1
} 

void main ()
{
   double A = S1::a * S2::a;	//resolusi skopr mengidentifikasi
								//apakah a milik dari S1 atau S2
   double B = S1:: b + S2::E ;

   cout<<"A = "<<A<<", "<<"B = "<<B<< endl;
   cout<<S1::ch<<", "<<S2::ch<<endl;
   cout<<S1::E<<" "<<S2::b<< endl;
}