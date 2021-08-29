#include<iostream>
#include<algorithm>
#include<functional>
#include <vector>
using namespace std;

vector <int> V;

int main()
{
   int S[] = {5, 6, 8, 7, 8, 3, 8, 10, 8, 12};

   for (int i = 0; i<10; i++)
      V.push_back (S[i]); //menciptakan sebuah vektor V dengan elemen-elemen dari S

   cout<<"V = ";
   vector<int>::iterator iter; //deklarasi iterator
   for (iter= V.begin(); iter <V.end(); iter++)
      cout<< *iter<<" ";  //Menampilkan elemen-elemen dari V
   cout<<endl;

   int Hitung = count(V.begin(), V.end(), 8); //Menghitung jumlah elemen dengan nilai 8
   cout<<"Jumlah elemen dengan nilai 8 = "<<Hitung<<endl;

   remove (V.begin(), V.end() , 8); //Menghapus elemen-elemen dengan nilai 8
   for ( int j = 0; j<Hitung; j++)
      V.pop_back( ) ;
   
   cout<<"Sekarang V = ";
   for (iter= V.begin(); iter <V.end(); iter++)
      cout<< *iter<<" "; //Menampilkan elemen-elemen setelah penghapusan
   cout<<endl;

   Hitung = count_if(V.begin(), V.end(), bind2nd(less<int>(),6));
   cout<<"Jumlah elemen yang bernilai kurang dari 6 = "<<Hitung;

   remove_if(V.begin(), V.end(), bind2nd(less<int>(),6));
   //Menghapus elemen-elemen yang bernilai kurang dari 6
   for (int k = 0; k<Hitung; k++)
      V.pop_back( ) ;

   cout<<"\nVektor baru setelah dua penghapusan:"<<endl;
   cout<<"V = ";
   for (iter= V.begin(); iter < V.end(); iter++)
      cout<<*iter<<" ";

   cout<<endl;
   return 0;
}