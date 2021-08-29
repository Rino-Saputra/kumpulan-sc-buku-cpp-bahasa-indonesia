#include <fstream>
#include <iostream>
using namespace std;

int main ()
{ 
   int Array[5] = { 5, 6, 7, 8, 9};

   ofstream outfile ("fileKu");

   for (int i=0 ; i<5 ; i++)
      outfile.write((char*) &Array, 5);

   outfile.close();

   ifstream infile ("fileKu");

   infile.read((char *) &Array, 5);

   for (int k =0;k<5 ; k++)
      cout<<"Array["<<k<<"] = "<<Array[k]<<" dan ukuran dalam byte = "
          <<sizeof(Array[k])<< endl;

   return 0;
}