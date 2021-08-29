//Contoh: Fungsi clear, empty, erase, length, dan size 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string namaPertama = "Elisabeth";		//Baris 1
    string nama = namaPertama + " Manurung";  //Baris 2
    string str1 = "Hari ini cerah.";  //Baris 3
    string str2 = "";  //Baris 4
    string str3 = "ilmu komputer";  //Baris 5
    string str4 = "pemrograman C++.";  //Baris 6
    string str5 = namaPertama + " mengambil kuliah " + str4;  //Baris 7

    string::size_type pjg;  //Baris 8

    cout << "Baris 9: str3: " << str3 << endl; //Baris 9
    str3.empty(); //Baris 10
    cout << "Baris 11: Setelah clear, str3: " << str3
         << endl; //Baris 11

    cout << "Baris 12: str1.empty(): " << str1.empty()
         << endl; //Baris 12

    cout << "Baris 13: str2.empty(): " << str2.empty()
         << endl; //Baris 13

    cout << "Baris 14: str4: " << str4 << endl; //Baris 14
    str4.erase(11, 4); //Baris 15
    cout << "Baris 16: Setelah erase(11, 4), str4: "
         << str4 << endl; //Baris 16

    cout << "Baris 17: Panjang dari \"" << namaPertama << "\" = "
         << static_cast<unsigned int> (namaPertama.length())
         << endl; //Baris 17

    cout << "Baris 18: Panjang dari \"" << nama << "\" = "
         << static_cast<unsigned int> (nama.length())
         << endl; //Baris 18

    cout << "Baris 19: Panjang dari \"" << str1 << "\" = "
         << static_cast<unsigned int> (str1.length())
         << endl; //Baris 19

    cout << "Baris 20: Ukuran dari \"" << str5 << "\" = "
         << static_cast<unsigned int> (str5.size())
         << endl; //Baris 20

    pjg = nama.length(); //Baris 21

    cout << "Baris 22: pjg = "
         << static_cast<unsigned int> (pjg) << endl; //Baris 22

    return 0; //Baris 23
}