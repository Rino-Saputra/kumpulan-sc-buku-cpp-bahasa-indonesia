//*******************************************************************
// Penulis: RH. Sianipar
// Program ini menunjukkan bagaimana objek-objek fungsi relasional STL
//*******************************************************************

#include <iostream> 
#include <string> 
#include <algorithm> 
#include <iterator> 
#include <vector> 
#include <functional> 

using namespace std;

int main() 
{ 
    equal_to<int> banding; 
    bool apaSama = banding(6, 6); 

	cout << "Baris 12: apaSama = " << apaSama << endl;

	greater<string> streLebihBesar; 

	string str1 = "Danau"; 
    string str2 = "Toba"; 

	if (streLebihBesar(str1, str2)) 
        cout << "Baris 17: \"" << str1 << "\" lebih besar "
             << "dari \"" << str2 << "\"" << endl; 

	else 
        cout << "Baris 19: \"" << str1 << "\" tidak "
             << "lebih besar dari \"" << str2 << "\""
             << endl; 

	int temp[8] = {2, 3, 4, 5, 1, 7, 8, 9}; 

	vector<int> vektList(temp, temp + 8); 
    vector<int>::iterator intItr1, intItr2; 
    ostream_iterator<int> layar(cout, " "); 

	cout << "Baris 24: vektList: "; 
    copy(vektList.begin(), vektList.end(), layar); 
    cout << endl; 

	intItr1 = adjacent_find(vektList.begin(),
        vektList.end(), greater<int>()); 
    intItr2 = intItr1 + 1; 

	cout << "Baris 29: Pada vektList, himpunan pertama atas "
         << "elemen-elemen tak terurut adalah: " << *intItr1
         << " " << *intItr2 << endl; 
    cout << "Baris 30: Pada vektList, elemen pertama yang "
         << "tidak terurut berada pada posisi: "
         << vektList.end() - intItr2 << endl; 

	return 0; 
}