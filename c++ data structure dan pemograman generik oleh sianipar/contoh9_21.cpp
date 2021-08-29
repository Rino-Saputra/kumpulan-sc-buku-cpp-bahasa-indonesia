//*************************************************************
// Penulis: RH. Sianipar
//
// Program ini menunjukkan bagaimana fungsi STL ccumulate dan
// adjacent_difference bekerja.
//*************************************************************

#include <iostream>  
#include <algorithm>  
#include <numeric>  
#include <iterator>  
#include <vector>  
#include <functional>

using namespace std;

void tampil(vector<int> vList);

int main()
{
	int list[8] = {1, 2, 3, 4, 5, 6, 7, 8};

	vector<int> vektList(list, list + 8);
	vector<int> baruVList(8);

	cout << "Baris 14: vektList: "; 
    tampil(vektList);

	int jum = accumulate(vektList.begin(),
                         vektList.end(), 0);

	cout << "Baris 17: Penjumlahan atas setiap elemen vektList = "
         << jum << endl;

	int produk = accumulate(vektList.begin(), vektList.end(),
                            1, multiplies<int>());

	cout << "Baris 19: Hasil perkalian tiap elemen dari "
         << "vektList = " << produk << endl;

	adjacent_difference(vektList.begin(), vektList.end(),
                        baruVList.begin());

	cout << "Baris 21: baruVList: "; 
    tampil(baruVList);

	adjacent_difference(vektList.begin(), vektList.end(),
                        baruVList.begin(), multiplies<int>());

	cout << "Baris 24: baruVList: "; 
    tampil(baruVList);

	return 0;
}

void tampil(vector<int> vList)
{
	ostream_iterator<int> layarTampil(cout, " ");

	copy(vList.begin(), vList.end(), layarTampil);
	cout << endl;
}






