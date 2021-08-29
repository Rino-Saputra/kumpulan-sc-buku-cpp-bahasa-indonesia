#include<iostream>
using namespace std;
#include<map>
#include<string>

typedef std::multimap<string ,int> Multinilai;

int main()
{
   Multinilai pasangan ;

   pasangan.insert(Multinilai::value_type("Kristof", 80));
   pasangan.insert(Multinilai::value_type("Kristof", 85));

   pasangan.insert(Multinilai::value_type("Kristof", 96));
   pasangan.insert(Multinilai::value_type("Vivian", 70));

   pasangan.insert(Multinilai::value_type("Vivian", 65));
   pasangan.insert(Multinilai::value_type("Anita", 95));

   pasangan.insert(Multinilai::value_type("Vivian", 60));

   cout<<"Berapa kali Kristof ada = "<<pasangan.count ("Kristof")<<endl;

   cout<<"Berapa kali Vivian ada = "<<pasangan.count ("Vivian")<<endl;

   cout<<"Berapa kali Anita ada = "<<pasangan.count ("Anita")<<endl;

   cout<<"Nama tiap mahasiswa dan skornya masing-masing sebagai berikut: "<<endl;
   for(Multinilai::const_iterator itr= pasangan.begin();
      itr != pasangan.end(); itr++)

   cout<< itr-> first <<"\t"<< itr-> second<<"\n";

   return 0;
}