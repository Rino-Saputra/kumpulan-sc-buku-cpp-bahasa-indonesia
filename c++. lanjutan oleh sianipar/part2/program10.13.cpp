#include<iostream>
using namespace std;

void main()
{ 
   int A = 206;

   cout.setf(ios::showbase);
   cout.setf(ios::uppercase);

   cout<<"Nilai A disajikan dengan pelbagai basis:"<<endl;
   cout<<"A dalam heksadesimal = "<<hex<<A<<endl;

   cout<<"A dalam oktal = "<<oct<<A<<endl;
   cout<<"A dalam desimal = "<<dec<<A<<endl;
}