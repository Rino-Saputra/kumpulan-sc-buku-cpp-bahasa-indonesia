#include<iostream>
# include<algorithm>	//mencantumkan file header <algorithm>
#include<vector>		//mencantumkan file header <vector>
using namespace std;

int main()
{
    vector<int> V;
    int S[6] = { 10, 20, 40, 40, 50, 60};

    for(int i =0; i < 6 ;i++)
        V.push_back (S[i]); //menciptakan vektor.

    int *Cari = adjacent_find ( V.begin(), V.end() );

    // Cari adalah iterator dan *Cari adalah nilai elemen.
    if ( Cari == V.end())
	{
        cout<<"Tidak ditemukan"<<endl; }
    else
      cout<<"Ditemukan kecocokan dimulai dari "<<*Cari <<endl;

    return 0 ;
}