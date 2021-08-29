#include<iostream>
#include<vector>
# include <iterator>
using namespace std;

vector<int> V; //Deklarasi dari sebuah vektor dengan elemen-elemen int

int main()
{
   cout<<"Masukkan 5 integer: "<<endl;
   istream_iterator <int> readit(cin);  //input iterator

   /*Berikut adalah fungsi push_back() yang dipakai untuk menambahkan elemen-elemen
     di belakang sebuah vektor V.*/
   V.push_back (*readit++);
   V.push_back (*(readit++));
   V.push_back (*(readit++));
   V.push_back (*(readit++));
   V.push_back (*(readit));

   cout<<"Elemen-elemen dari V adalah: ";
   vector<int>:: iterator iter = V.begin();
   /*vector adalah nama kelas, iterator adalah katakunci. iter adalah nama iterator.
     Fungsi begin() menghasilkan iterator yang menunjuk ke elemen pertama dari V.
	 Kelas vector mendukung keberadaan iterator random (acak).*/
   
   while(iter != V.end())
   //end() menghasilkan iterator yang menunjuk ke tepat setelah elemen terakhir dari vektor
      cout<<*iter++ <<" "; //menampilkan nilai-nilai elemen dari vektor

   return 0;
}