//*********************************************************************
// Penulis: RH. Sianipar
//
// Program ini menunjukkan bagaimana objek fungsi aritmatik STL bekerja.
//*********************************************************************

#include <iostream> 
#include <string> 
#include <algorithm> 
#include <numeric> 
#include <iterator> 
#include <vector> 
#include <functional> 

using namespace std; 

int fungTambah(plus<int>, int, int); 

int main() 
{ 
    plus<int> tambahAngka; 
    int jum = tambahAngka(34, 56); 

    cout << "Baris 14: jum = " << jum << endl;

	plus<string> gabungString;

	string str1 = "Danau "; 
    string str2 = "Toba"; 

	string str = gabungString(str1, str2); 

	cout << "Baris 19: str = " << str << endl; 
    cout << "Baris 20: Penjumlahan atas 34 dan 26 = "
         << fungTambah(tambahAngka, 34, 26) << endl; 

	int list[8] = {1, 2, 3, 4, 5, 6, 7, 8}; 

	vector<int> intList(list, list + 8); 
    ostream_iterator<int> tampilLayar(cout, " "); 

	cout << "Baris 24: intList: "; 
    copy(intList.begin(), intList.end(), tampilLayar); 
    cout << endl; 

	//mengakumulasi
    int jumlah = accumulate(intList.begin(),
        intList.end(), 0); 
    
	cout << "Baris 28: Penjumlahan atas elemen-elemen pada intList = "
         << jumlah << endl; 

	int hasil = accumulate(intList.begin(), intList.end(),
        1, multiplies<int>()); 

	cout << "Baris 30: Hasil perkalian atas elemen-elemen pada intList = "
         << hasil << endl; 

	return 0; 
} 

int fungTambah(plus<int> jumlah, int x, int y)
{ 
    return jumlah(x, y); 
}