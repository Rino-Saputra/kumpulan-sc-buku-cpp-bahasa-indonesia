#include<iostream>
#include <deque>
using namespace std;

int main()
{ 
   deque <int> Q1;
   Q1.assign(4, 12) ;

   cout<<"Elemen-elemen dari antrian adalah: "<<endl;
   for (int j = 0; j<4; j++)
      cout <<" "<< Q1[j]<<" " ;
   cout<<endl;

   cout<<"Ukuran dari Q1 adalah: " << Q1.size()<<endl;

   cout<<"Menempatkan dua (nilai 10) di depan dan dua (nilai 20) di akhir antrian."<<endl;
   Q1.push_front(10 );
   Q1.push_front(10 );
   Q1.push_back(20);
   Q1.push_back(20);

   deque<int> :: iterator itr ;
   // itr adalah nama iterator
   for (itr= Q1.begin(); itr != Q1.end(); itr++)
      cout << *(itr ) <<" " ;

   cout <<"\nElemen-elemen ke-2 sampai ke-4 dihapus."<<endl;
   Q1.erase((Q1.begin() +1),(Q1.begin() +4 ) );

   cout<<"Menyisipkan dua nilai 50 pada posisi ke-3."<<endl;
   Q1.insert((Q1.begin() +2),2,50 );

   cout<<"Sekarang ukuran dari Q1 adalah: "<<Q1.size()<<endl;

   cout<<"Elemen-elemen dari Q1 adalah: "<<endl;
   for (itr = Q1.begin() ; itr < Q1.end () ; itr ++)
      cout<<*itr <<" " ;
   cout<<endl;

   return 0;
}