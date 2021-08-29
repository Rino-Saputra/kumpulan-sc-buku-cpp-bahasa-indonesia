//Contoh operasi-operasi string 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "Roro Kusumawandari"; //Baris 1
    string str1, str2, str3, str4; //Baris 2

    cout << "Baris 3: Nama = " << nama << endl; //Baris 3

    str1 = "Hallo Semua"; //Baris 4
    cout << "Baris 5: str1 = " << str1 << endl; //Baris 5

    str2 = str1; //Baris 6
    cout << "Baris 7: str2 = " << str2 << endl; //Baris 7

    str1 = "Hari"; //Baris 8
    str2 = str1 + " Cerah"; //Baris 9
    cout << "Baris 10: str2 = " << str2 << endl; //Baris 10

    str1 = "Hallo"; //Baris 11
    str2 = "Semua"; //Baris 12
    str3 = str1 + " " + str2; //Baris 13
    cout << "Baris 14: str3 = " << str3 << endl; //Baris 14

    str3 = str1 + ' ' + str2; //Baris 15
    cout << "Baris 16: str3 = " << str3 << endl; //Baris 16

    str1 = str1 + " Robert"; //Baris 17
    cout << "Baris 18: str1 = " << str1 << endl; //Baris 18

    str1 = "Hallo semua"; //Baris 19
    cout << "Baris 20: str1[6 ] = " << str1[6 ]
         << endl; //Baris 20

    str1[6] = 'S'; //Baris 21
    cout << "Baris 22: str1 = " << str1 << endl; //Baris 22

    //Operasi-operasi masukan string
    cout << "Baris 23: Masukkan sebuah string "
         << "tanpa spasi: "; //Baris 23
    cin >> str1; //Baris 24

    char ch; //Baris 25
    cin.get(ch); //Membaca karakter garis-baru; Baris 26
    cout << endl; //Baris 27

    cout << "Baris 28: String yang Anda masukkan = "
         << str1 << endl; //Baris 28

    cout << "Baris 29: Masukkan sebuah kalimat: "; //Baris 29
    getline(cin, str2); //Baris 30
    cout << endl; //Baris 31

    cout << "Baris 32: Kalimat yang Anda masukkan = " << str2
         << endl; //Baris 32

    return 0;
}