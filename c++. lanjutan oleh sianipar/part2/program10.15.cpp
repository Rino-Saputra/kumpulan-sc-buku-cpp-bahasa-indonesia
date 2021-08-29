#include <fstream>
#include <iostream>
using namespace std;

int main ()
{
   ofstream out_ke_file("fileKu");	//deklarasi dari aliran keluaran

   out_ke_file<<"Ayo belajar C++.\n";	//menuliskan kelimat pertama ke dalam file

   out_ke_file<<"Anda memerlukan kompiler untuk berlatih.\n";
   //menuliskan kelimat lain ke dalam file

   out_ke_file.close(); //menutup file

   return 0;
}