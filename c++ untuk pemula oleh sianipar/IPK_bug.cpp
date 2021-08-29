//Program IPK dengan bug.

#include <iostream> //Baris 1

using namespace std; //Baris 2

int main() //Baris 3
{ //Baris 4
    double ipk; //Baris 5

    cout << "Masukkan IPK: "; //Baris 6
    cin >> ipk; //Baris 7
    cout << endl; //Baris 8

    if (ipk >= 2.0) //Baris 9
        if (ipk >= 3.9) //Baris 10
            cout << "Mendapatkan penghargaan dari Dekan." << endl; //Baris 11
    else //Baris 12
        cout << "IPK di bawah persyaratan "
             << "kelulusan. \nTemui pembimbing "
             << "akademik Anda." << endl; //Baris 13

    return 0; //Baris 14
}