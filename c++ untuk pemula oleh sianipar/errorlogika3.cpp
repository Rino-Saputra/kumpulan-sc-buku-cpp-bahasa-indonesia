#include <iostream> //Baris 1

using namespace std; //Baris 2

int main() //Baris 3
{ //Baris 4
    int fahrenheit; //Baris 5
    int celsius; //Baris 6

    cout << "Masukkan suhu dalam Fahrenheit: "; //Baris 7
    cin >> fahrenheit; //Baris 8
    cout << endl; //Baris 9

	celsius = static_cast<int>
             (5.0 / 9 * (fahrenheit - 32) + 0.5); //Baris 10
 
    cout << fahrenheit << " derajat F = "
         << celsius << " derajat C. " << endl; //Baris 11

    return 0; //Baris 12
} //Baris 13