#include<iostream>
#include<stack>
using namespace std;

void main()
{ 
   stack<int> St1 ; //St1 dideklarasikan sebagai tumpukan integer
 
   for (int i =1; i< 7; i++) // konstruksi tumpukan oleh fungsi push()
      St1.push (10* i);

   //Elemen-elemen yang diisikan adalah 10, 20, 30, 40, 50, 60
   //Pada tumpukan, tatanannya adalah LIFO
   cout <<"Elemen teratas pada St1 = "<<St1.top()<<endl;

   cout<<"Ukuran dari tumpukan adalah = "<<St1.size()<<endl;

   cout<<"Elemen-elemen dari St1 adalah: ";
   while(!St1.empty()) //statemen untuk menampilkan elemen-elemen tumpukan
   {
      cout<<St1.top()<<" ";
      St1.pop() ; 
   } //menghapus elemen teratas
}