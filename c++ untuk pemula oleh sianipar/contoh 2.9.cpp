//Kegagalan masukan dan fungsi clear

#include <iostream>

using namespace std;

int main()
{
    int a = 23; //Baris 1
    int b = 34; //Baris 2

    cout << "Baris 3: Masukkan sebuah angka diikuti"
         << " dengan sebuah karakter: "; //Baris 3
    cin >> a >> b; //Baris 4

    cout << endl << "Baris 5: a = " << a
         << ", b = " << b << endl; //Baris 5
    
	cin.clear(); //Memulihkan aliran masukan; Baris 6

    cin.ignore(200,'\n'); //Membersihkan penyangga; Baris 7

    cout << "Baris 8: Masukkan dua angka: "; //Baris 8
    cin >> a >> b; //Baris 9
    cout << endl << "Baris 10: a = " << a
         << ", b = " << b << endl; //Baris 10

    return 0;
}