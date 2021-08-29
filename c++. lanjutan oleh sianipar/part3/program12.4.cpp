#include<iostream>
#include<list>
using namespace std;

list<char> Lc ;			//deklarasi dari sebuah list dengan nama Lc dan bertipe char
list<int> Li (7,60);	//deklarasi dari sebuah list dengan Li
						//list ini memiliki 7 elemen int dengan tiap nilai 60

int main()
{
   for (int i=0; i<6;i++)
      Lc.push_back(65+i); //Menambahkan elemen-elemen di belakang list Lc

   cout<<"Elemen pertama dari Lc adalah "<<Lc.front()<<" dan elemen akhirnya adalah "
       <<Lc.back()<<endl; //menampilkan elemen pertama dan elemen akhir

   list<double>Ld(3,2.5); //List Ld mempunyai tiga elemen masing-masing dengan nilai 2.5

   for (int j =0; j< 3; j++)
   {
      Ld.push_back( 5.5); //Menambahkan 3 elemen, dengan nilai 10.5, di belakang list
      Ld.push_front( 10.5);
   } //Menambahkan 3 elemen, dengan nilai 10.5, di depan list

   cout<<"Lc = ";
   list<double>::iterator itrd;		//iterator untuk list double
   list<int>:: iterator itri;		//deklarasi iterator untuk list int
   list <char>:: iterator itrc;		//iterator untuk list char

   for(itrc= Lc.begin(); itrc!=Lc.end(); itrc++)
      cout << *itrc <<" "; //menampilkan elemen-elemen dari list Lc.

   cout<<"\nLi = ";
   for(itri= Li.begin(); itri!=Li.end(); itri++)
      cout<<*itri<<" "; // menampilkan elemen-elemen dari list Li.

   cout<<"\n Ld = ";
   for(itrd= Ld.begin(); itrd!=Ld.end(); itrd++)
      cout<<*itrd<<" "; //menampilkan elemen-elemen dari list Ld.

   cout<<"\nElemen pertama dari Ld = " <<*(Ld.begin())<<endl;

   cout<<"\nElemen ketiga dari Ld dari awal = "<<*(++(++ Ld.begin())) ;
   //kelas list tidak mendukung akses acak

   cout<<"\nElemen ketiga dari Ld dari akhir = "<< * (--(-- Ld.end()))<<endl;

   return 0;
}