#include<iostream>
#include<numeric>
using namespace std;

int main()
{ 
    int S[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    int jum_empat = accumulate( S , S+4, 0); //nilai awal adalah 0
    cout<< "Penjumlahan atas 4 elemen pertama = " << jum_empat<<endl;

	int jum_semua = accumulate( S , S+8, 0);
    cout << "Penjumlahan atas semua elemen = " << jum_semua<<endl;

    cout<<"Penjumlahan atas semua elemen + 100 = "<<accumulate(S,S+8,100)<< endl;
    // nilai awal adalah 100.

	cout<<"Penjumlahan atas semua elemen - 100 = " <<accumulate(S,S+8,-100)<< endl;
    // nilai awal adalah -100.

	return 0 ;
}