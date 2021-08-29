//*************************************************************
// Penulis: RH.Sianipar
//
// Program ini menunjukkan bagaimana fungsi-fungsi STL remove, remove_if,
// remove_copy, dan remove_copy_if bekerja.
//*************************************************************

#include <iostream> 
#include <cctype> 
#include <algorithm> 
#include <iterator> 
#include <vector>

using namespace std;

bool kurangDariSamaDengan50(int angka);

int main()
{
    char cList[10] = {'A', 'a', 'A', 'B', 'A',
                      'c', 'D', 'e', 'F', 'A'};

	vector<char> charList(cList, cList + 10); 
    vector<char>::iterator elemAkhir, elemAkhirBaru;

	ostream_iterator<char> layar(cout, " ");

	cout << "Baris 14: Daftar karakter: "; 
    copy(charList.begin(), charList.end(), layar); 
    cout << endl;

	// remove
    elemAkhir = remove(charList.begin(),
                      charList.end(), 'A');

	cout << "Baris 18: Daftar karakter setelah menghapus A: "; 
    copy(charList.begin(), elemAkhir, layar); 
    cout << endl;

	// remove_if
    elemAkhirBaru = remove_if (charList.begin(),
                             elemAkhir, isupper); 

	cout << "Baris 22: Daftar karakter setelah menghapus "
         << "huruf-huruf besar: " << endl; 
    copy(charList.begin(), elemAkhirBaru, layar); 
    cout << endl << endl;

	int list[10] = {12, 34, 56, 21, 34, 78, 34, 55, 12,
                    25};

	vector<int> intList(list, list + 10); 
    vector<int>::iterator elemenTerakhir;

	ostream_iterator<int> layarTampil(cout, " ");

	cout << "Baris 29: intList: "; 
    copy(intList.begin(), intList.end(), layarTampil); 
    cout << endl;

	vector<int> temp1(10);

	// remove_copy
    elemenTerakhir = remove_copy(intList.begin(), intList.end(),
                             temp1.begin(), 34);

	cout << "Baris 34: temp1 setelah menghapus semua "
         << "elemen-elemen intList kecuali 34: " << endl; 
    copy(temp1.begin(), elemenTerakhir, layarTampil); 
    cout << endl;

	vector<int> temp2(10, 0);

	//remove_copy_if
    remove_copy_if (intList.begin(), intList.end(),
                    temp2.begin(), kurangDariSamaDengan50);

	cout << "Baris 39: temp2 setelah menghapus semua elemen dari "
         << "intList kecuali \nangka-angka yang kurang dari 50: "; 
    copy(temp2.begin(), temp2.end(), layarTampil); 
    cout << endl;

	return 0;
}

bool kurangDariSamaDengan50(int angka) 
{ 
    return (angka <= 50); 
}







