#include <iostream>
using namespace std;

namespace boneka	//boneka adalah pengenal untuk namespace
{ 
   int a = 8;
   char E[] = "John";
}

namespace bola		//bola adalah pengenal untuk namespace
{
   double b = 4.5;
   char E[] = "Pergi ke sekolah!";
}

void main ()
{
   using namespace boneka;	//aplikasi dari direktif using
   cout<<a*a<< endl;		//sekarang operasi resolusi skop tidak diperlukan
							//untuk variabel-variabel dari namespace boneka, tetapi
							//diperlukan untuk variabel-variabel dari namespace bola

   cout<<E<<" "<<bola::E<<endl;
   //menggunakan operator resolusi skop untuk E
}