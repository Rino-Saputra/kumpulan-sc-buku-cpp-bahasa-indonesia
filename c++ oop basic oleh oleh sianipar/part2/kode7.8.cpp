// kode7.8.cpp
#include <iostream>
int main()
{
using std::cout;
using std::endl;
using std::ios_base;
int temperatur = 63;
cout << "Temperatur air hari ini: ";
cout.setf(ios_base::showpos); // menampilkan tanda +
cout << temperatur << endl;
cout << "Bagi sahabat programmer, yaitu\n";
cout << std::hex << temperatur << endl; // menggunakan hex
cout.setf(ios_base::uppercase); // menggunakan huruf besa pada heksadesimal
cout.setf(ios_base::showbase); // menggunakan awalan 0X pada heksadesimal
cout << "atau\n";
cout << temperatur << endl;
cout << "Wow " << true << "! ya ya ya -- Wow ";
cout.setf(ios_base::boolalpha);
cout << true << "!\n";
return 0;
}