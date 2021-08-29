//*************************************************************
// Penulis: RH. Sianipar
//
// Program ini menunjukkan bagaimana fungsi STL for_each dan
// transform bekerja.
//*************************************************************

#include <iostream> 
#include <cctype> 
#include <algorithm>  
#include <iterator>  
#include <vector>

using namespace std;

void gandaAngka(int& angka);

int main()
{
	char cList[5] = {'a', 'b', 'c', 'd', 'e'};

	vector<char> charList(cList, cList + 5);

	ostream_iterator<char> layar(cout, " ");

	cout << "Baris 13: charList: "; 
    copy(charList.begin(), charList.end(), layar);  
    cout << endl;

	transform(charList.begin(), charList.end(),
              charList.begin(), toupper);

	cout << "Baris 17: charList setelah mengubah semua"
         << " huruf kecil menjadi \n huruf besar: ";  
    copy(charList.begin(), charList.end(), layar);  
    cout << endl;

	int list[7] = {2, 8, 5, 1, 7, 11, 3};

	ostream_iterator<int> layarTampil(cout, " ");

	cout << "Baris 22: list: ";  
    copy(list, list + 7, layarTampil);  
    cout << endl;

	cout << "Baris 25: Pengaruh dari fungsi "
         << "for_each: "; 
    for_each(list, list + 7, gandaAngka);  
    cout << endl;

	cout << "Baris 28: list setelah sebuah pemanggilan terhadap "
         << "fungsi for_each: "; 
    copy(list, list + 7, layarTampil); 
    cout << endl;

	return 0;
}

void gandaAngka(int& angka) 
{  
    angka = 2 * angka; 
    cout << angka << " "; 
}


 
