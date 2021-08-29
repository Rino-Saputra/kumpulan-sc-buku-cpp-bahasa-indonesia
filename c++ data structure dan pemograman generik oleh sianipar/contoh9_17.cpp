//*************************************************************
// Penulis: RH. Sianipar
//
// Program ini menunjukkan bagaimana fungsi STL count, count_if,
// max_element, min_element, dan random_shuffle bekerja.
//*************************************************************

#include <iostream> 
#include <cctype> 
#include <algorithm> 
#include <iterator> 
#include <vector>

using namespace std;

int main()
{
	char cList[10] = {'Z', 'a', 'Z', 'B', 'Z',
                      'c', 'D', 'e', 'F', 'Z'};

	vector<char> charList(cList, cList + 10);

	ostream_iterator<char> layar(cout, " ");

	cout << "Baris 12: charList: "; 
    copy(charList.begin(), charList.end(), layar); 
    cout << endl;

	int jlhZ = count(charList.begin(), charList.end(),
                       'Z');

	cout << "Baris 16: Jumlah Z\'s di dalam charList:"
         << jlhZ << endl;

	int jlhHurufBesar = count_if (charList.begin(), charList.end(),
                                  isupper);

	cout << "Baris 18: Jumlah huruf besar di dalam "
         << "charList: " << jlhHurufBesar << endl;

	int list[10] = {12, 34, 56, 21, 34,
                    78, 34, 55, 12, 25};

	ostream_iterator<int> layarTampil(cout, " ");

	cout << "Baris 21: list: "; 
    copy(list, list + 10, layarTampil); 
    cout << endl;

	int *lokMaks = max_element(list,
                               list + 10);

	cout << "Baris 25: Elemen terbesar di dalam list: "
         << *lokMaks << endl;

	int *lokMin = min_element(list,
                              list + 10);

	cout << "Baris 27: Elemen terkecil di dalam list: "
         << *lokMin << endl;

	random_shuffle(list, list + 10);

	cout << "Baris 29: list setelah random shuffle: "; 
    copy(list, list + 10, layarTampil); 
    cout << endl;

	return 0;
}
