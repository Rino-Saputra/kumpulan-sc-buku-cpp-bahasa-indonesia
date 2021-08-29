//Contoh: setw

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x = 19; //Baris 1
    int a = 345; //Baris 2
    double y = 76.384; //Baris 3
 
    cout << fixed << showpoint; //Baris 4

    cout << "12345678901234567890" << endl; //Baris 5

    cout << setw(5) << x << endl; //Baris 6
    cout << setw(5) << a << setw(5) << "Hi"
         << setw(5) << x << endl << endl; //Baris 7

    cout << setprecision(2); //Baris 8
    cout << setw(6) << a << setw(6) << y
        << setw(6) << x << endl; //Baris 9
    cout << setw(6) << x << setw(6) << a
        << setw(6) << y << endl << endl; //Baris 10

    cout << setw(5) << a << x << endl; //Baris 11
    cout << setw(2) << a << setw(4) << x << endl; //Baris 12

   return 0;
}