// kode7.110.cpp 
#include <iostream>
#include <iomanip>
#include <cmath>
int main()
{
using namespace std;
// menggunakan manipulator-manipulator standard yang baru
cout << showpoint << fixed << right;
// menggunakan manipulator-manipulator iomanip
cout << setw(6) << "N" << setw(14) << "akar kuadrat"
<< setw(25) << "akar dari akar kuadrat\n";
double akar;
for (int n = 10; n <=100; n += 10)
{
akar = sqrt(double(n));
cout << setw(6) << setfill('.') << n << setfill(' ')
<< setw(12) << setprecision(3) << akar
<< setw(14) << setprecision(4) << sqrt(akar)
<< endl;
}
return 0;
}