//*************************************************************
// Penulis: RH. Sianipar
//
// Program ini menunjukkan bagaimana fungsi fill dan fill_n STL
// digunakan.
//*************************************************************

#include <iostream> 
#include <algorithm> 
#include <iterator> 
#include <vector> 

using namespace std;

int main()
{
	vector<int> vektList(8); 
    ostream_iterator<int> layar(cout, " ");

	fill(vektList.begin(), vektList.end(), 2);

	cout << "Baris 11: Setelah pengisian vektList dengan beberapa 2: "; 
    copy(vektList.begin(), vektList.end(), layar); 
    cout << endl;

	fill_n(vektList.begin(), 3, 5);

	cout << "Baris 15: Setelah pengisian tiga elemen pertama "
         << "dengan tiga buah 5: " << endl << "         ";

	copy(vektList.begin(), vektList.end(), layar); 
    cout << endl;

	return 0;

}