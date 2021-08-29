#include<iostream>
#include<vector>
using namespace std;

vector<int> V2(2);	//V2 memiliki dua elemen, masing-masing nilai 0.
vector< double > V4;

int main()
{
   for (int i = 1; i<6; i++)
   { 
      V2.push_back (i*i);	//5 nilai (1, 4, 9, 16, 25) ditempatkan ke dalam V2
      V4.push_back (i*2.5); //5 nilai ditempatkan ke dalam V4
   }
   cout<<"\nV4 = ";

   vector<double>:: iterator itr4;
   for(itr4 = V4.begin(); itr4 != V4.end(); itr4++)
      cout<< *itr4<<" "; //menampilkan elemen-elemen dari V4

   vector<int> :: iterator itr;
   cout<<"\nSekarang V2 = ";
   for(itr = V2.begin(); itr != V2.end(); itr++)
      cout<<*itr<<" " ;

   cout<<"\nSetelah menghapus dua elemen pertama, V2 = ";
   if ( V2.front() ==0)
      V2.erase(V2.begin(),V2.begin()+2);
   //menghapus elemen pertama dan kedua. Elemen ketiga tidak dihapus

   for(itr = V2.begin(); itr != V2.end(); itr++)
      cout<< *itr<<" "; //statemen keluaran

   V2.pop_back( );
   V2.pop_back();

   cout<<"\nSetelah dua kali pop-back, V2 = ";
   for( itr = V2.begin(); itr != V2.end(); itr++)
      cout<< *itr<<" ";
   cout<<endl;

   return 0;
}