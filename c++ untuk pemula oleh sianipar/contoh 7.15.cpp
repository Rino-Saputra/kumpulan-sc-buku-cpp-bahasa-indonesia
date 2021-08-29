//Contoh: fungsi find

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kalimat = "Hari ini sedikit berawan dan lembab."; //Baris1
    string str = "berawan";  //Baris 2

    string::size_type posisi;  //Baris3
 
    cout << "Baris 4: kalimat = \"" << kalimat
         << "\"" << endl; //Baris 4

    cout << "Baris 5: Posisi dari \"se\" di dalam kalimat = "
         << static_cast<unsigned int> (kalimat.find("se"))
         << endl; //Baris 5

    cout << "Baris 6: Posisi dari 'i' di dalam kalimat = "
         << static_cast<unsigned int> (kalimat.find('i'))
         << endl; //Baris 6

    cout << "Baris 7: Posisi dari \"" << str
         << "\" di dalam kalimat = "
         << static_cast<unsigned int> (kalimat.find(str))
         << endl; //Baris 7

    cout << "Baris 8: Posisi dari \"xyz\" di dalam kalimat = "
         << static_cast<unsigned int> (kalimat.find("xyz"))
          << endl; //Baris 8

    cout << "Baris 9: Kemunculan pertama dari \'d\' di dalam "
         << "kalimat \n setelah posisi 6 = "
         << static_cast<unsigned int> (kalimat.find('d', 6))
         << endl; //Baris 9

    posisi = kalimat.find("lembab"); //Baris 10

    cout << "Baris 11: " << "Posisi = "
         << posisi << endl; //Baris 11

    return 0; //Baris 12
}