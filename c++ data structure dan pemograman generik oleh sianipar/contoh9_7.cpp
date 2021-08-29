//*************************************************************
// Penulis: RH. Sianipar
//
// Program ini menunjukkan bagaimana penyisip STL bekerja.
//*************************************************************

#include <iostream> 
#include <algorithm> 
#include <iterator> 
#include <vector> 
#include <list> 

using namespace std;

int main()
{
	int temp[8] = {1, 2, 3, 4, 5, 6, 7, 8};

	vector<int> vektList1; 
    vector<int> vektList2;

	ostream_iterator<int> layarTampil(cout, " ");

	copy(temp, temp + 8, back_inserter(vektList1));

	cout << "Baris 14: vektList1: "; 
    copy(vektList1.begin(), vektList1.end(), layarTampil); 
    cout << endl;

	copy(vektList1.begin(), vektList1.end(),
        inserter(vektList2, vektList2.begin()));

	cout << "Baris 18: vektList2: "; 
    copy(vektList2.begin(), vektList2.end(), layarTampil);
    cout << endl;

	list<int> tempList;

	copy(vektList2.begin(), vektList2.end(),
        front_inserter(tempList));

	cout << "Baris 23: tempList: "; 
    copy(tempList.begin(), tempList.end(), layarTampil); 
    cout << endl;

	return 0;
}




