#include <fstream>
#include <iostream>
using namespace std;

int main ()
{ 
   char str[80];

   ifstream in_dari_file ("fileKu");
   
   in_dari_file.getline(str,80);
   cout<<str<<endl;

   in_dari_file.getline(str,80);
   cout<<str<<endl;

   in_dari_file.close();

   return 0;
}