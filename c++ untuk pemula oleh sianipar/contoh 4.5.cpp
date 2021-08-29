//**********************************************************
// Program: Dijit-dijit telepon
// Ini merupakan sebuah contoh dari loop terkendali-sentinel.
// Program ini mengkonversi huruf besar menjadi dijit telepon
// terkati.
//**********************************************************
#include <iostream>

using namespace std;

int main()
{
    char huruf; //Baris 1

    cout << "Program untuk mengkonversi huruf besar "
         << "menjadi dijit telepon "
         << "terkait." << endl; //Baris 2

    cout << "Untuk menghentikan program tekan #."
         << endl; //Baris 3

    cout << "Masukkan sebuah huruf: "; //Baris 4
    cin >> huruf; //Baris 5
    cout << endl; //Baris 6

    while (huruf != '#') //Baris 7
	{
        cout << "Huruf yang Anda masukkan adalah: "
             << huruf << endl; //Baris 8
        cout << "Dijit telepon terkait "
             << "adalah: "; //Baris 9

        if (huruf >= 'A' && huruf <= 'Z') //Baris 10
            switch (huruf) //Baris 11
			{
                case 'A':
                case 'B':
                case 'C':
                    cout << 2 <<endl; //Baris 12
                    break; //Baris 13
                case 'D':
                case 'E':
                case 'F':
                    cout << 3 << endl; //Baris 14
                    break; //Baris 15
                case 'G':
                case 'H':
                case 'I':
                    cout << 4 << endl; //Baris 16
                    break; //Baris 17
                case 'J':
                case 'K':
                case 'L':
                    cout << 5 << endl; //Baris 18
                    break; //Baris 19
                case 'M':
                case 'N':
                case 'O':
                    cout << 6 << endl; //Baris 20
                    break; //Baris 21
                case 'P':
                case 'Q':
                case 'R':
                case 'S':
                    cout << 7 << endl; //Baris 22
                    break; //Baris 23
                case 'T':
                case 'U':
                case 'V':
                    cout << 8 << endl; //Baris 24
                    break; //Baris 25
                case 'W':
                case 'X':
                case 'Y':
                case 'Z':
                    cout << 9 << endl; //Baris 26
		}
        else //Baris 27
            cout << "Masukan tak-valid." << endl; //Baris 28

        cout << "\nMasukkan huruf besar lain "
             << "untuk menamukan dijit "
             << "telepon terkait."
             << endl; //Baris 29

        cout << "Untuk menghentikan program tekan #."
             << endl; //Baris 30

        cout << "Masukkan sebuah huruf: "; //Baris 31
        cin >> huruf; //Baris 32
        cout << endl; //Baris 33
	}//akhir while

    return 0;
}