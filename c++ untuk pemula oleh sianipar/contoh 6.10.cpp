#include <iostream>
#include <iomanip>

using namespace std;

int volume(int l = 1, int w = 1, int h = 1);
void fungsiSatu(int& x, double y = 12.34, char z = 'B');

int main()
{
    int a = 23;
    double b = 48.78;
    char ch = 'M';

    cout << fixed << showpoint;
    cout << setprecision(2);
 
    cout << "Baris 1: a = " << a << ", b = "
         << b << ", ch = " << ch << endl; //Baris 1

    cout << "Baris 2: Volume = " << volume()
         << endl; //Baris 2

    cout << "Baris 3: Volume = " << volume(5, 4)
         << endl; //Baris 3

    cout << "Baris 4: Volume = " << volume(34)
         << endl; //Baris 4

    cout << "Baris 5: Volume = "
         << volume(6, 4, 5) << endl; //Baris 5

    fungsiSatu(a); //Baris 6
    fungsiSatu(a, 42.68); //Baris 7
    fungsiSatu(a, 34.65, 'Q'); //Baris 8

    cout << "Baris 9: a = " << a << ", b = "
         << b << ", ch = " << ch << endl; //Baris 9

    return 0;
}

int volume(int l, int w, int h)
{
    return l * w * h; //Baris 10
}

void fungsiSatu(int& x, double y, char z)
{
    x = 2 * x; //Baris 11

    cout << "Baris 12: x = " << x << ", y = "
         << y << ", z = " << z << endl; //Baris 12
}