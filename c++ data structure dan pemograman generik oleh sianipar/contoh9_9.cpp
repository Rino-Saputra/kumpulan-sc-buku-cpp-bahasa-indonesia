//*************************************************************
// Penulis: RH. Sianipar
//
// Program ini menunjukkan bagaimana fungsi generate dan 
// generate_n STL digunakan.
//*************************************************************

#include <iostream> 
#include <algorithm> 
#include <iterator> 
#include <vector>

using namespace std;

int angkaBerikutnya();

int main()
{
	vector<int> vektList(8);
	ostream_iterator<int> layar(cout, " ");

	generate(vektList.begin(), vektList.end(), angkaBerikutnya);

	cout << "Baris 12: vektList setelah pengisian dengan "
         << "angka-angka: ";

	copy(vektList.begin(), vektList.end(), layar); 
    cout << endl;

	generate_n(vektList.begin(), 3, angkaBerikutnya);

	cout << "Baris 16: vektList, setelah pengisian tiga "
         << "elemen pertama " << endl
         << "          dengan angka berikutnya: ";

	copy(vektList.begin(), vektList.end(), layar); 
    cout << endl;

	return 0;
}

int angkaBerikutnya()
{
    static int n = 1;

	return n++;
}


 
