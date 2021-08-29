//Loop while terkendali-bendera.
//Permainan tebak angka.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //mendeklarasikan variabel-variabel
    int angka; //variabel untuk menyimpan
               //angka acak
    int tebak; //variabel untuk menyimpan angka
               //yang ditebak oleh pengguna
    bool apaTertebak; //variabel bool untuk 
                    //mengendalikan loop

    srand(time(0)); //Baris 1
    angka = rand() % 100; //Baris 2
    apaTertebak = false; //Baris 3

    while (!apaTertebak) //Baris 4
	{ //Baris 5
        cout << "Masukkan sebuah integer yang lebih"
             << " dari atau sama dengan 0 dan "
             << "kurang dari 100: "; //Baris 6

        cin >> tebak; //Baris 7
        cout << endl; //Baris 8

        if (tebak == angka) //Baris 9
		{ //Baris 10
            cout << "Anda menebak "
                 << "angka yang tepat." << endl; //Baris 11
            apaTertebak = true; //Baris 12
		} //Baris 13
        else if (tebak < angka) //Baris 14
            cout << "Tebakan Anda kurang dari "
                 << "angka.\n Tebak lagi!"
                 << endl; //Baris 15
        else //Baris 16
            cout << "Tebakan Anda lebih dari "
                 << "angka.\n Tebak lagi!"
                 << endl; //Baris 17
	} //akhir while //Baris 18

    return 0;
}