#include<iostream>
using namespace std;
#include<map> // Header file is same as for maps.
#include<string>

typedef std::multimap<string, int> Multinilai;
//Dengan typedef ini, Anda hanya perlu menulis Multinilai menggantikan
// std::multimap<string, int>

int main()
{
   Multinilai pasangan;

   pasangan.insert(Multinilai::value_type("Kristof", 80));
   pasangan.insert(Multinilai::value_type("Kristof", 85));

   pasangan.insert(Multinilai::value_type("Kristi", 96));
   pasangan.insert(Multinilai::value_type("John", 70));

   pasangan.insert(Multinilai::value_type("John", 65));
   pasangan.insert(Multinilai::value_type("Bubita", 95));

   pasangan.insert(Multinilai::value_type("Rosintan", 60));
   pasangan.insert(Multinilai::value_type("Rosi", 60));


   for(Multinilai::const_iterator itr = pasangan.begin();
      itr != pasangan.end(); itr++)
   
   cout<< itr-> first <<"\t"<< itr-> second<<"\n";

   return 0;
}