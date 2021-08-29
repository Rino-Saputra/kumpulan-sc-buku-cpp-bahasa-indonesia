#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{ 
   double akar;

   cout<<setw(6)<<"Nilai"<<setw(20)<<"akar(Saintifik)"<<setw(15)
	   <<"akar(normal)\n"<<endl;

   for (int i =0; i<6;i++)
   { 
      akar = sqrt(i);

	  cout.setf(ios::left);
      cout<<setprecision (8);

	  cout<<setw(10)<<i<<setw(20)<<setiosflags(ios::scientific)<<akar 
		  <<setw(20);
      //menetapkan lebar menjadi 10 untuk i dan lebar 20 untuk akar,
	  //mengaktifkan bendera ios::scientific

	  cout<<setprecision(4)<<resetiosflags(ios::scientific)<<akar<< endl;}
      //menetapkan kepresisian menjadi 4, menonaktifkan bendera ios::scientific 

   return 0 ;
}