#include <iostream>
using namespace std;

class Mahluk
{
   public:
      virtual void Bicara() = 0;
};

class Anjing : public Mahluk
{ 
   public:
      void Bicara ()
	  {cout<<"Guk guk guk"<<endl;}
};

class Kucing : public Mahluk
{
   public:
      void Bicara(void)
	  {cout<<"Meonk meonk meonk"<<endl;}
};

class IngMan : public Mahluk
{ 
   public :
      void Bicara(){cout<<"I can speak English"<<endl;}
};

class IndMan : public Mahluk
{ 
   public :
      void Bicara(){cout<<"Saya bicara bahasa Indonesia"<<endl;}
};

void main ()
{
   Anjing A;
   Kucing K;

   IngMan IgM;
   IndMan InM;

   A.Bicara();
   K.Bicara();

   IgM.Bicara();
   InM.Bicara();

   cout<<"\n";
}