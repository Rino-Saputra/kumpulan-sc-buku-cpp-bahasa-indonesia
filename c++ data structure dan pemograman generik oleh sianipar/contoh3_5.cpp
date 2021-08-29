//***********************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana menggunakan sebuah
// kontainer vektor di dalam sebuah program.
//***********************************************************

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> intList;

	intList.push_back(13); 
    intList.push_back(75); 
    intList.push_back(28); 
    intList.push_back(35);

	cout << "Baris 11: Daftar elemen: ";
	for (int i = 0; i < 4; i++)
		cout << intList[i] << " ";
	cout << endl;

	for (int j = 0; j < 4; j++)
		intList[j] *= 2;

	cout << "Baris 17: Daftar elemen: ";
	for (int k = 0; k < 4; k++)
		cout << intList[k] << " ";
	cout << endl;

	vector<int>::iterator listIt;

	cout << "Baris 22: Daftar elemen: ";
	for (listIt = intList.begin();
	              listIt != intList.end(); ++listIt)
	    cout << *listIt << " ";
	cout << endl;

	listIt = intList.begin();
	++listIt;
	++listIt;
	intList.insert(listIt, 88);

	cout << "Baris 30: Daftar elemen: ";
	for (listIt = intList.begin();
                  listIt != intList.end(); ++listIt)
        cout << *listIt << " ";
	cout << endl;

	return 0;
}
