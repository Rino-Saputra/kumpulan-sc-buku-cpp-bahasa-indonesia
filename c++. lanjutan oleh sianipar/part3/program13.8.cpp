#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> V1;
vector<double> V2 ;
vector<char> V3;

void main()
{ 
   for (int i =0; i<=4;i++)
   {
      V1.push_back (i+2 ); //menciptakan sebuah vektor
      V2. push_back (sqrt(i+2));
      V3.push_back (65 + i); 
   }

   vector<int>::iterator K1 = V1.begin();
   vector<double>::iterator K2 = V2.begin();
   vector<char>::iterator K3 = V3.begin();

   cout <<"Sebelum penyisipan: "<<endl;
   cout <<"V1\tV2\t V3"<<endl;
   while (K1 != V1.end())
   {
      cout <<*K1<<"\t"<<*K2<<"\t"<< *K3<<endl;
      K1++;
      K2++;
      K3++;
   }

   vector<int>::iterator A1 = V1.begin();
   vector<double>::iterator A2 = V2.begin();
   vector<char>::iterator A3 = V3.begin();

   V1.insert(A1 ,3,9);		//menyisipkan tiga buah nilai 9 di awal dari V1.
   V2.insert(A2+2,3,10.5);	/*menyisipkan tiga elemen masing-masing bernilai
							  10.5 pada lokasi ke-3.*/

   V3.insert (A3+3,3,'A'); /*menyisipkan tiga elemen masing-masing bernilai
							 3 pada lokasi ke-4.*/

   cout<<"Setelah penyisipan: "<<endl;
   cout <<"V1\tV2\t V3"<<endl;
   while (A1 != V1.end())
   {
      cout<<*A1<<"\t"<<*A2<<"\t"<<*A3<< endl;
      A1++;
      A2++;
      A3++;
   }
}