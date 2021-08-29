#include<iostream>
#include<vector>
using namespace std;

vector<int> V;

int main()
{
   for ( int i =1; i<=5;i++)
      V.push_back (i*i);	//5 nilai:1, 4, 9, 16, 25 ditempatkan ke dalam V
  
   cout<<"Ukuran dari V = "<< V.size()<<endl;
   cout<<"Kapasitas dari V = "<< V.capacity()<<endl;

   cout<<"Elemen-elemen dari vektor V adalah: "<<endl;
   for (int j = 0; j<=4; j++)
      cout <<" "<< V[j]<<" ";
   cout<<endl;

   V.pop_back(); //Elemen akhir (25) dihapus
   cout<<"Setelah pop_back, ukuran dari V adalah = "<<V.size()<<endl;

   cout<<"Kapasitas dari V = "<<V.capacity()<<endl;
   for (int k =1; k< 6; k++)
      V.push_back (2*k);	//5 nilai: (2, 4, 6, 8, 10) ditempatkan ke dalam V

   cout<<"Sekarang ukuran dari V adalah = "<<V.size();
   cout<<"\nSekarang kapasitas dari V adalah = "<< V.capacity();

   vector<int> :: iterator itr;		//deklarasi dari iterator itr

   cout<<"\nSetelah pop_back, elemen-elemen dari V adalah: "<<endl;
   for (itr = V.begin(); itr < V.end (); itr ++)
      cout<<*itr <<" " ; //menampilkan nilai dari tiap elemen dengan iterator

   cout<<endl;
   return 0;
}