//*************************************************************
// Penulis: RH. Sianipar
//
// Program ini menunjukkan bagaimana fungsi STL reverse,
// reverse_copy, rotate, dan rotate_copy bekerja.
//*************************************************************

#include <iostream>  
#include <algorithm> 
#include <iterator> 
#include <list>

using namespace std;

int main()
{
	int temp[10] = {1, 3, 5, 7, 9, 0, 2, 4, 6, 8};

	list<int> intList(temp, temp + 10); 
    list<int> hasilList; 
    list<int>::iterator listItr;

	ostream_iterator<int> layar(cout, " ");

	cout << "Baris 13: intList: "; 
    copy(intList.begin(), intList.end(), layar); 
    cout << endl;

	reverse(intList.begin(), intList.end());

	cout << "Baris 17: intList setelah pembalikan: "; 
    copy(intList.begin(), intList.end(), layar); 
    cout << endl;

	reverse_copy(intList.begin(), intList.end(),
                 back_inserter(hasilList));

	cout << "Baris 21: hasilList: "; 
    copy(hasilList.begin(), hasilList.end(), layar); 
    cout << endl;

	listItr = intList.begin(); 
    listItr++; 
    listItr++;

	cout << "Baris 27: intList setelah rotasi: "; 
    copy(intList.begin(), intList.end(), layar); 
    cout << endl;

	rotate(intList.begin(), listItr, intList.end());

	cout << "Baris 31: intList setelah rotasi: "; 
    copy(intList.begin(), intList.end(), layar); 
    cout << endl;

	hasilList.clear();

	rotate_copy(intList.begin(), listItr, intList.end(),
                back_inserter(hasilList));

	cout << "Baris 36: intList setelah rotasi dan "
         << "penyalinan: "; 
    copy(intList.begin(), intList.end(), layar); 
    cout << endl;

	cout << "Baris 39: hasilList setelah rotasi dan "
         << "penyalinan: "; 
    copy(hasilList.begin(), hasilList.end(), layar); 
    cout << endl;

	hasilList.clear();

	rotate_copy(intList.begin(),
                find(intList.begin(),
                intList.end(), 6), intList.end(),
                back_inserter(hasilList));

	cout << "Baris 44: hasilList setelah rotasi dan "
         << "penyalinan: ";
	copy(hasilList.begin(), hasilList.end(),
         layar);
	cout << endl;

	return 0;
}



