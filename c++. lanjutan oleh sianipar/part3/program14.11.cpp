#include<iostream>
using namespace std;
#include<map>
#include<string>

typedef std:: map < string ,int> Multinilai;

int main()
{
   Multinilai pasangan;

   pasangan.insert (Multinilai::value_type("Kristof", 80));
   pasangan.insert (Multinilai::value_type("Kristof", 85));
   pasangan.insert (Multinilai::value_type("Kristi", 96));
   pasangan.insert (Multinilai::value_type("John", 70));
   pasangan.insert (Multinilai::value_type("John", 65));
   pasangan.insert (Multinilai::value_type("Bubita", 95));
   pasangan.insert (Multinilai::value_type("Rosintan", 60));
   pasangan.insert (Multinilai::value_type("Rosi", 60)) ;

   cout<<"Ukuran terkini dari pasangan adalah = "<<pasangan.size()<<endl;

   Multinilai::const_iterator itr= pasangan.begin();
   cout<<"Isi dari pasangan adalah sebagai berikut: "<<endl;
   for(itr = pasangan.begin(); itr != pasangan.end(); itr++)
      cout<< itr-> first <<"\t"<< itr-> second<<"\n";

   pasangan.erase (pasangan.begin() );  //menghapus elemen pertama
   cout <<"Ukuran setelah menghapus pasangan pertama adalah = "<< pasangan.size() <<endl;

   cout <<"Isi setelah penghapusan adalah: "<<endl;
   Multinilai::iterator iter;   //deklarasi dari iterator
   for(iter= pasangan.begin(); iter != pasangan.end(); iter++)
      cout<< iter-> first <<"\t"<< iter-> second<<"\n";

   return 0;
}