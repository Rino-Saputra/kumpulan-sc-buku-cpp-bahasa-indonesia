//Program dengan bug

#include <iostream> //Baris 1

using namespace std; //Baris 2

int main() //Baris 3
{ //Baris 4
    int skorTest; //Baris 5

    cout << "Masukkan skor test: "; //Baris 6
    cin >> skorTest; //Baris 7
    cout << endl; //Baris 8

    switch (skorTest / 10) //Baris 9
    { //Baris 10
        case 0: //Baris 11
        case 1: //Baris 12
        case 2: //Baris 13
        case 3: //Baris 14
        case 4: //Baris 15
        case 5: //Baris 16
            cout << "Nilai adalah F." << endl; //Baris 17
        case 6: //Baris 18
            cout << "Nilai adalah D." << endl; //Baris 19
        case 7: //Baris 20
            cout << "Nilai adalah C." << endl; //Baris 21
        case 8: //Baris 22
            cout << "Nilai adalah B." << endl; //Baris 23
        case 9: //Baris 24
        case 10: //Baris 25
            cout << "Nilai adalah A." << endl; //Baris 26
        default: //Baris 27
            cout << "Skor test tak-valid." << endl; //Baris 28
    } //Baris 29

    return 0; //Baris 30
}