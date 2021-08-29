//Contoh: setprecision, fixed, showpoint

#include <iostream> //Baris 1
#include <iomanip> //Baris 2

using namespace std; //Baris 3

const double PI = 3.14159265; //Baris 4

int main() //Baris 5
{ //Baris 6
    double radius = 12.67; //Baris 7
    double tinggi = 12.00; //Baris 8

    cout << fixed << showpoint; //Baris 9

    cout << setprecision(2)
         << "Baris 10: setprecision(2)" << endl; //Baris 10
    cout << "Baris 11: radius = " << radius << endl; //Baris 11
    cout << "Baris 12: tinggi = " << tinggi << endl; //Baris 12
    cout << "Baris 13: volume = "
         << PI * radius * radius * tinggi << endl; //Baris 13
    cout << "Baris 14: PI = " << PI << endl << endl; //Baris 14

    cout << setprecision(3)
         << "Baris 15: setprecision(3)" << endl; //Baris 15
    cout << "Baris 16: radius = " << radius << endl; //Baris 16
    cout << "Baris 17: tinggi = " << tinggi << endl; //Baris 17
    cout << "Baris 18: volume = "
         << PI * radius * radius * tinggi << endl; //Baris 18
    cout << "Baris 19: PI = " << PI << endl << endl; //Baris 19

    cout << setprecision(4)
         << "Baris 20: setprecision(4)" << endl; //Baris 20
    cout << "Baris 21: radius = " << radius << endl; //Baris 21
    cout << "Baris 22: tinggi = " << tinggi << endl; //Baris 22

    cout << "Baris 23: volume = "
         << PI * radius * radius * tinggi << endl; //Baris 23
    cout << "Baris 24: PI = " << PI << endl << endl; //Baris 24
    
    cout << "Baris 25: "
         << setprecision(3) << radius << ", "
         << setprecision(2) << tinggi << ", "
         << setprecision(5) << PI << endl; //Baris 25
 
   return 0; //Baris 26
}