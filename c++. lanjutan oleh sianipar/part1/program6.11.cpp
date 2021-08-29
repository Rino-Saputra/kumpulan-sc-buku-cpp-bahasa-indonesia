#include <iostream>
using namespace std;

class B
{ 
   public:
      void Tampil() {cout<<"Fungsi Tampil() dari kelas B dipanggil"<<endl;}
};

class D1 : public B
{};

class D2 : public B
{};

class D3 : public D2, public D1
{};

int main()
{ 
   D3 d3;
   d3.Tampil();

   return 0;
}