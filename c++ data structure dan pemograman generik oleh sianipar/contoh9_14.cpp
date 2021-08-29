//*************************************************************
// Penulis: RH. Sianipar
//
// Program ini menunjukkan bagaimana fungsi STL swap, iter_swap,
// dan swap_ranges bekerja.
//*************************************************************

#include <iostream> 
#include <algorithm> 
#include <vector> 
#include <iterator>

using namespace std;

int main()
{
    char cList[10] = {'A', 'B', 'C', 'D', 'F',
                      'G', 'H', 'I', 'J', 'K'};

	vector<char> charList(cList, cList + 10); 
    vector<char>::iterator charItr;

	ostream_iterator<char> layar(cout, " ");

	cout << "Baris 12: Daftar karakter: "; 
    copy(charList.begin(), charList.end(), layar); 
    cout << endl;

	// swap
	swap(charList[0], charList[1]);

	cout << "Baris 16: Daftar karakter setelah penukaran "
         << "elemen pertama dan elemen kedua: " << endl; 
    copy(charList.begin(), charList.end(), layar); 
    cout << endl;

	//iter_swap
    iter_swap(charList.begin() + 2,
              charList.begin() + 3);

	cout << "Baris 20: Daftar karakter setelah penukaran "
         << "elemen ketiga dan elemen keempat: " << endl; 
    copy(charList.begin(), charList.end(), layar); 
    cout << endl;

	charItr = charList.begin() + 4; 
    iter_swap(charItr, charItr + 1);

	cout << "Baris 25: Daftar karakter setelah penukaran "
         << "elemen kelima dan elemen keenam: " << endl; 
    copy(charList.begin(), charList.end(), layar);
    cout << endl << endl;

	int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	vector<int> intList(list, list + 10);

	ostream_iterator<int> layarTampil(cout, " ");

	cout << "Baris 31: intList: "; 
    copy(intList.begin(), intList.end(), layarTampil); 
    cout << endl;

	//swap_ranges
    swap_ranges(intList.begin(), intList.begin() + 4,
                intList.begin() + 5);

	cout << "Baris 35: intList setelah penukaran empat elemen pertama "
         << "dengan \n empat elemen dimulai pada "
         << "elemen keenam pada intList: "
         << endl;

    copy(intList.begin(), intList.end(), layarTampil); 
    cout << endl;

	return 0;
}
