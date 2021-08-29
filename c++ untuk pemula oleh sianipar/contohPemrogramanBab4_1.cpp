//*************************************************************
// Program: angka Fibonacci ke-n.
// Jika diberikan dua angka pertama dari runtun Fibonacci, maka
// program ini menentukan dan menampilkan angka yang diinginkan
// dari runtun Fibonacci.
//*************************************************************
#include <iostream>

using namespace std;

int main()
{
    //Mendeklarasikan variabel-variabel
    int sebelumnya1;
    int sebelumnya2;
    int sekarang;
    int kounter;
    int fibonacciKe_n;

    cout << "Masukkan dua angka Fibonacci "
         << "pertama: "; //Langkah 1
    cin >> sebelumnya1 >> sebelumnya2; //Langkah 2
    cout << endl;

    cout << "Dua angka Fibonacci pertama adalah "
         << sebelumnya1 << " and " << sebelumnya2
         << endl; //Langkah 3

    cout << "Masukkan posisi dari angka "
         << "Fibonacci yang diinginkan: "; //Langkah 4
    cin >> fibonacciKe_n; //Langkah 5
    cout << endl;

    if (fibonacciKe_n == 1) //Langkah 6.a
        sekarang = sebelumnya1;
    else if (fibonacciKe_n == 2) //Langkah 6.b
        sekarang = sebelumnya2;
    else //Langkah 6.c
	{
        kounter = 3; //Langkah 6.c.i
        //Langkah 6.c.2 - 6.c.5
        while (kounter <= fibonacciKe_n)
		{
            sekarang = sebelumnya2 + sebelumnya1; //Langkah 6.c.ii
            sebelumnya1 = sebelumnya2; //Langkah 6.c.iii
            sebelumnya2 = sekarang; //Langkah 6.c.iv
            kounter++; //Langkah 6.c.v
		}//akhir while
	}//akhir else

    cout << "Angka Fibonacci pada posisi ke "
         << fibonacciKe_n << " adalah " << sekarang
         << endl; //Langkah 7

    return 0;
}//akhir main