//Program: Melempar dadu

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int lemparDadu(int num);

int main()
{
    cout << "Jumlah pelemparan dadu untuk "
         << "mendapatkan hasil penjumlahan 10 = " << lemparDadu(10) << endl;

    cout << "Jumlah pelemparan dadu untuk "
         << "mendapatkan hasil penjumlahan 6 = " << lemparDadu(6) << endl;

    return 0;
}

int lemparDadu(int angka)
{
    int dadu1;
    int dadu2;
    int jum;
    int hitungLemparan = 0;
    
    srand(time(0));

    do
    {
        dadu1 = rand() % 6 + 1;
        dadu2= rand() % 6 + 1;
        jum = dadu1 + dadu2;
        hitungLemparan++;
    }
    while (jum != angka);

    return hitungLemparan;
}
