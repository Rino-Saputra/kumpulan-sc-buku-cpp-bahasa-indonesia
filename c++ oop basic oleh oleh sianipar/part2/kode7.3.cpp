// kode7.3.cpp
#include <iostream>
int main()
{
using namespace std;
cout << "Masukkan suatu integer: ";
int n;
cin >> n;
cout << "n n*n\n";
cout << n << " " << n * n << " (desimal)\n";
// ditetapkan menjadi mode heksadesimal
cout << hex;
cout << n << " ";
cout << n * n << " (heksadesimal)\n";
// ditetapkan menjadi mode oktal
cout << oct << n << " " << n * n << " (oktal)\n";
// cara alternatif untuk memanggil suatu manipulator
dec(cout); m
cout << n << " " << n * n << " (desimal)\n";
return 0;
}