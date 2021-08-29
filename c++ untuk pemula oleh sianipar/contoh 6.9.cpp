//Program: Variabel statis dan variabel otomatis

#include <iostream>

using namespace std;

void test();

int main()
{
    int hitung;

    for (hitung = 1; hitung <= 5; hitung++)
        test();

    return 0;
}

void test()
{
    static int x = 0;
    int y = 10;

    x = x + 2;
    y = y + 1;

    cout << "Di dalam test x = " << x << " dan y = "
         << y << endl;
}