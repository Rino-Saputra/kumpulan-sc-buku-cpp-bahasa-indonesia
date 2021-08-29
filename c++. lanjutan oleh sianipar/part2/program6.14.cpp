#include <iostream>
# include <typeinfo> //file header untuk typeid()
using namespace std;

class B
{};

class D1 : public B
{};

class D2 : public D1
{};

int main ()
{ 
   D2 d2;
   D1 d1;

   if (typeid( d1) == typeid (d2))
      cout<<"Kedua objek sama"<<endl;
   else
      cout<<"Kedua objek berbeda tipe"<<endl;

   cout<<"Tipe dari d1 adalah "<<typeid(d1).name()<<endl;
   cout<<"Tipe dari d2 adalah "<<typeid(d2).name()<<endl;

   return 0;
}