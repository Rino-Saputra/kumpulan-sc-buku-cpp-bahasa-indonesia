#include <iostream>
using namespace std;

int main()
{
   cout.width(20);
   cout.fill('-');

   cout<<"Selamat pagi!\n";
   /*Selamat pagi! akan dituliskan  dalam 20 spasi
     spasi kosong akan diisi dengan dash(-) */
   
   cout.width(40);
   cout.fill('*');
   //keluaran akan dituliskan dalam 40 spasi,
   //spasi kosong akan diisi dengan bintang *.

   cout<<"Selamat belajar pemrograman C++!\n";
   int n = 4500600;
   cout.width(25);
   cout.setf(ios::left);	//penyejajaran kiri
   cout<<n<<endl;

   cout.width(25);
   cout.setf(ios::right);	//penyejajaran kanan
   cout<<n<<endl;

   double m = 344.567585435656;
   cout. width(5);
   cout.precision(10);			//kepresisian ditetapkan 10 dijit
   cout.setf(ios::scientific);	//notasi saintifik notation
   //ini bisa juga dikode dengan
   // cout.setf(ios::scientific, ios::floatfield);
   cout<< m<<endl;

   cout.unsetf(ios::scientific);	//membatalkan notasi saintifik
   //noasi unsetf() hanya memerlukan satu parameter
   cout<<m <<endl;

   return 0;
}