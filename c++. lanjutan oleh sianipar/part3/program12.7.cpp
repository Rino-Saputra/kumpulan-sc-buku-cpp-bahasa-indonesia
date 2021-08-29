#include<iostream>
#include<stack>
#include <string>
using namespace std;

void main()
{
   stack<int> Ski ;		//deklarasi tumpukan integer
   stack<char> Sch;		//deklarasi tumpukan char
   stack<string> Skt ;	//deklarasi tumpukan string

   string Nama[4]={"Jakarta", "Medan", "Surabaya", "Bandung"};
   char ch[4] = {'B', 'A', 'C', 'T'};
   int Array[5] = { 10, 40, 60,20,10 };

   for (int i = 0;i < 4; i++)
   {
      Ski.push (Array[i]);	//menempatkan 4 elemen pada tumpukan Ski
      Sch.push (ch[i]);		//menempatkan 4 elemen pada tumpukan Sch
      Skt.push (Nama[i]);	//menempatkan 4 elemen pada tumpukan Skt
   } 

   cout <<"Elemen teratas pada Skt = "<<Skt.top()<<endl;
   cout <<"Elemen teratas pada Sch = "<<Sch.top()<<endl;
   cout <<"Elemen teratas pada Ski = "<<Ski.top()<<endl;

   cout<<"Ukuran dari tumpukan Skt adalah = "<<Skt.size()<<endl;

   cout<<"Elemen-elemen dari ketiga tumpukan adalah sebagai berikut: "<<endl;
   for (int j = 0;j < 4; j++)
   { 
      cout<<Skt.top()<<"\t"<< Sch.top()<<"\t"<<Ski.top()<<"\n";
      Skt.pop() ;	//menghapus elemen teratas pada Skt
      Sch.pop();	//menghapus elemen teratas pada Sch
      Ski.pop();	//menghapus elemen teratas pada Ski
   }
}