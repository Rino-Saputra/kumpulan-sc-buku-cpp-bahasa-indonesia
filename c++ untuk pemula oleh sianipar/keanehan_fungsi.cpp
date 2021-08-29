// Program ini mengilustrasikan bahwa sebuah fungsi penghasil nilai
// hanya menghasilkan satu nilai, bahkan jika statemen return
// memuat lebih dari satu ekspresi.

#include <iostream>

using namespace std;

int fungsiRet1();
int fungsiRet2(int z);

int main()
{
    int num = 4;

    cout << "Baris 1: Nilai balik yang dihasilkan oleh funcRet1: "
         << fungsiRet1() << endl; // Baris 1

    cout << "Baris 2: Nilai balik yang dihasilkan oleh funcRet2: "
         << fungsiRet2(num) << endl; // Baris 2

    return 0;
}

int fungsiRet1()
{
    int x = 45;
    
	return 23, x; //hanya nilai x yang dijadikan nilai balik
}

int fungsiRet2(int z)
{
    int a = 2;
    int b = 3;

    return 2 * a + b, z + b; //hanya nilai dari z + b yang dijadikan nilai balik
}
