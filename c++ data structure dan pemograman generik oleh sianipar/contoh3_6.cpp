//***************************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana menggunakan fungsi copy
// dan sebuah iterator ostream di dalam program.
//***************************************************************

#include <algorithm> 
#include <vector> 
#include <iterator> 
#include <iostream>

using namespace std;

int main()
{
	int intArray[] = {5, 6, 8, 3, 40, 36, 98, 29, 75};

	vector<int> vektList(9);

	ostream_iterator<int> layar(cout, " ");

	cout << "Baris 11: intArray: ";  
    copy(intArray, intArray + 9, layar); 
    cout << endl;

	copy(intArray, intArray + 9, vektList.begin());

	cout << "Baris 15: vektList: "; 
    copy(vektList.begin(), vektList.end(), layar); 
    cout << endl;

	copy(intArray + 1, intArray + 9, intArray);
	cout << "Baris 19: Setelah menggeser elemen-elemen sejauh satu "
         << "posisi ke kiri, intArray: " << endl;
	copy(intArray, intArray + 9, layar);
	cout << endl;

	copy(vektList.rbegin() + 2, vektList.rend(),
                                vektList.rbegin());
	cout << "Baris 23: Setelah menggeser elemen-elemen ke bawah "
         << "sejauh dua posisi, vektList:" << endl;
	copy(vektList.begin(), vektList.end(), layar);
	cout << endl;

	return 0;
}