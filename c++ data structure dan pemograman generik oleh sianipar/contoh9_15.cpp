//*************************************************************
// Penulis: RH. Sianipar
//
// Program ini menunjukkan bagaimana fungsi STL search, search_n,
// sort, dan binary_search bekerja.
//*************************************************************

#include <iostream> 
#include <algorithm> 
#include <iterator> 
#include <vector>

using namespace std;

int main()
{
	int intList[15] = {12, 34, 56, 34, 34, 78, 38, 43,
                       12, 25, 34, 56, 62, 5, 49};

	vector<int> vektList(intList, intList + 15); 
    int list[2] = {34, 56};

	vector<int>::iterator lokasi;

	ostream_iterator<int> layarTampil(cout, " ");

	cout << "Baris 13: vektList: "; 
    copy(vektList.begin(), vektList.end(), layarTampil); 
    cout << endl;

	cout << "Baris 16: list: "; 
    copy(list, list + 2, layarTampil); 
    cout << endl;

	// search
    lokasi = search(vektList.begin(), vektList.end(),
                      list, list + 2);

	if (lokasi != vektList.end()) 
        cout << "Baris 21: list ditemukan di dalam vektList."
             << "Kemunculan pertama dari \n list di dalam vektList "
             << "berada pada posisi: "
             << (lokasi - vektList.begin()) << endl;

	else 
        cout << "Baris 23: list tidak ditemukan di dalam vecList"
             << endl;

	//search_n
    lokasi = search_n(vektList.begin(), vektList.end(),
                        2, 34);

	if (lokasi != vektList.end()) 
        cout << "Baris 26: Dua kemunculan berurutan dari "
             << "34 ditemukan di dalam \n vektList pada posisi: "
             << (lokasi - vektList.begin()) << endl;

	else 
        cout << "Baris 28: Dua kemunculan berurutan "
             << "dari 34 tidak ada di dalam vektList" << endl;

	//sort
    sort(vektList.begin(), vektList.end());

	cout << "Baris 30: vektList setelah pengurutan:"
         << endl << "     ";
	copy(vektList.begin(), vektList.end(), layarTampil); 
    cout << endl;

	//binary_search
    bool ditemukan;

	ditemukan = binary_search(vektList.begin(),
                          vektList.end(), 78);

	if (ditemukan) 
        cout << "Baris 36: 43 ditemukan di dalam vektList " << endl;
	else 
        cout << "Baris 38: 43 tidak ditemukan di dalam vektList" << endl;

	return 0;
}


 