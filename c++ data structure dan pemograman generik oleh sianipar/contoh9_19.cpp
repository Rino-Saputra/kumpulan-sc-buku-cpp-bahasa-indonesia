//***************************************************************
// Penulis: RH. Sianipar
//
// Program ini menunjukkan bagaimana fungsi STL includes bekerja.
// Fungsi ini mengasumsikan bahwa elemen-elemen di dalam rentang
// diurutkan sesuai dengan kriteria pengurutan tertentu.
//***************************************************************

#include <iostream> 
#include <algorithm>

using namespace std;

int main()
{
	char setA[5] = {'A', 'B', 'C', 'D', 'E'};
	char setB[10] = {'A', 'B', 'C', 'D', 'E',
                     'F', 'I', 'J', 'K', 'L'};
	char setC[5] = {'A', 'E', 'I', 'O', 'U'};

	ostream_iterator<char> layar(cout, " ");

	cout << "Baris 10: setA: "; 
    copy(setA, setA + 5, layar); 
    cout << endl;

	cout << "Baris 13: setB: "; 
    copy(setB, setB + 10, layar);  
    cout << endl;

	cout << "Baris 16: setC: "; 
    copy(setC, setC + 5, layar);  
    cout << endl;

	if (includes(setB, setB + 10, setA, setA + 5)) 
        cout << "Baris 20: setA adalah subhimpunan dari setB"
             << endl;

	else 
        cout << "Baris 22: setA bukan subhimpunan dari setB"
             << endl;

	if (includes(setB, setB + 10, setC, setC + 5))  
        cout << "Baris 24: setC adalah subhimpunan dari setB"
             << endl;

	else  
        cout << "Baris 26: setC bukan subhimpunan dari setB"
             << endl;

	return 0;
}





