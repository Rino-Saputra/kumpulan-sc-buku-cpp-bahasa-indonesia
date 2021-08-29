//Contoh: Fungsi insert dan replace

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string stringPertama = "Berawan dan hangat."; //Baris 1
    string stringKedua = "Hallo semua"; //Baris 2
    string stringKetiga = "Robert mengambil kuliah pemrograman I."; //Baris 3
    string str1 = " sangat "; //Baris 4
    string str2 = "Foster"; //Baris 5

	cout << "Baris 6: stringPertama = " << stringPertama
         << endl; //Baris 6
    stringPertama.insert(11, str1); //Baris 7
    cout << "Baris 8: Setelah insert; stringPertama = "
         << stringPertama << endl; //Baris 8

    cout << "Baris 9: stringKedua = " << stringKedua
         << endl; //Baris 9
    stringKedua.insert(11, 5, '!'); //Baris 10
    cout << "Baris 11: Setelah insert; stringKedua = "
         << stringKedua << endl; //Baris 11

    cout << "Baris 12: stringKetiga = " << stringKetiga
         << endl; //Baris 12
    stringKetiga.replace(0, 6, str2); //Baris 13
    cout << "Baris 14: Setelah replace, stringKetiga = "
         << stringKetiga << endl; //Baris 14

    return 0; //Baris 15
}