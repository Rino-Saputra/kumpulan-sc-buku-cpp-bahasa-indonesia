#include <iostream>
using namespace std;

class B
{ 
   public:
      virtual char Tipe(){return 'B';}
};

class C : public B
{ 
   public:
      char Tipe(){return 'C';}
};

class D : public B
{
   public:
      char Tipe(){return 'D';}
};

int main()
{ 
   B b;
   C c ;
   D d ;

   B* pb = &b;
   cout<<"Tipe dari pb sekarang adalah : "<< pb -> Tipe()<<endl;

   pb = & c;
   cout<<"Tipe dari pb sekarang adalah : "<<pb -> Tipe()<<endl;

   pb = & d;
   cout<<"Tipe dari pb sekarang adalah : "<<pb -> Tipe()<<endl;

   return 0 ;
}