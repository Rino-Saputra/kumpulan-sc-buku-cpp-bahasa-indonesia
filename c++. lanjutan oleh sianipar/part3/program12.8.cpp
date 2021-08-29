#include<iostream>
#include<stack>
using namespace std;

#include <vector>

int main()
{
   stack <int, vector <int> > Tumpukan1, Tumpukan2, Tumpukan3;
   //Deklarasi tumpukan int
   //Kontainer yang digunakan adalah vektor

   int Array1[] = {12, 13, 14, 15, 16};
   int Array2[] = {40, 60, 20, 10, 50};

   for ( int i = 0;i < 5; i++)
   {
      Tumpukan1.push (Array1[i]);
      Tumpukan2 .push (Array2[i]); 
   }
      
   Tumpukan3 = Tumpukan2; // Tumpukan2 ditugaskan kepada Tumpukan3

   cout<<"Ukuran dari Tumpukan3 adalah = "<<Tumpukan3 .size()<<endl;

   if ( Tumpukan2 == Tumpukan3 ) // relational == operator
      cout<< "Tumpukan3 dan Tumpukan2 sama.\n";
   else
      cout<<"Tumpukan3 dan Tumpukan2 tidak sama.\n";

   Tumpukan3.push(80); //menambahkan elemen lain pada tumpukan

   cout <<"Sekarang ukuran dari Tumpukan3 = "<<Tumpukan3.size()<<endl;

   for ( int j = 0;j < 6; j++) //untuk menampilkan elemen-elemen tumpukan
   {
      cout<<Tumpukan3.top()<<" " ; //menampilkan elemen teratas pada Tumpukan3
      Tumpukan3.pop(); // menghapus elemen teratas dari Tumpukan3
   }
   cout<<endl;

   return 0;
}