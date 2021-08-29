#include <fstream>
#include <iostream>
using namespace std;

int main ()
{
   ifstream infile ("fileMu");

   if(!infile)
      cout<<"File dengan nama fileMu tidak ada."<<endl;

   return 0; 
}