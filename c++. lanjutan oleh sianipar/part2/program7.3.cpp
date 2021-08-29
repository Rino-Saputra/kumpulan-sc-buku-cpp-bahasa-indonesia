#include<iostream>
#include<string>
using namespace std;

template <class T>		//definsii template dari Tukar()
void Tukar(T &x , T &y) //nilai-nilai dilewatkan dengan referensi
{ 
   T temp;
   temp = x;
   x = y;
   y = temp;
}

void main()
{ 
   int n =60, m=30;
   char ch1= 'A', ch2 = 'D';
   double a = 2.45, b = 4.76;

   string S1 = "Selamat";	//S1 dan S2 adalah objek string
   string S2 = "Malam";		//tipenya adalah string

   Tukar <double>(a,b);
   Tukar<char>(ch1,ch2);

   Tukar<int>(n,m);
   Tukar<string>(S1,S2);	

   cout<<"a = "<<a<<"\tb = "<<b<<"\n";
   cout<<"ch1 = "<<ch1<<"\tch2 = "<<ch2<<endl;

   cout<<"n = "<<n<<" \tm = "<<m<<"\n";
   cout<<"S1 = "<<S1<<" , S2 = "<<S2<<endl;
}