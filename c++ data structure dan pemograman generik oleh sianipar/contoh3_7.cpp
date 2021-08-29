//***********************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana menggunakan sebuah
// kontainer deque di dalam program.
//***********************************************************

#include <iostream> 
#include <deque> 
#include <algorithm> 
#include <iterator>

using namespace std;

int main()
{
	deque<int> intDeq;
	ostream_iterator<int> layar(cout, " ");

	intDeq.push_back(13);
	intDeq.push_back(75);

	intDeq.push_back(28);
	intDeq.push_back(35);

	cout << "Baris 14: intDeq: ";  
    copy(intDeq.begin(), intDeq.end(), layar); 
    cout << endl;

	intDeq.push_front(0); 
    intDeq.push_back(100);

	cout << "Baris 19: Setelah penambahan dua "
         << "elemen, satu di depan " << endl
         << " dan satu di belakang, intDeq: ";

	copy(intDeq.begin(), intDeq.end(), layar); 
    cout << endl;

	intDeq.pop_front(); 
    intDeq.pop_front();

	cout << "Baris 24: Setelah penghapusan dua "
         << "elemen pertama, intDeq: ";
	copy(intDeq.begin(), intDeq.end(), layar); 
    cout << endl;

	intDeq.pop_back(); 
    intDeq.pop_back();

	cout << "Baris 29: Setelah penghapusan dua "
         << "elemen terakhir, intDeq = ";

	copy(intDeq.begin(), intDeq.end(), layar);
	cout << endl;

	deque<int>::iterator deqIt;

	deqIt = intDeq.begin();
	++deqIt; //deqIt menunjuk ke elemen kedua
	intDeq.insert(deqIt, 444);
	cout << "Baris 36: Setelah penyisipan 444, intDeq: ";
	copy(intDeq.begin(), intDeq.end(), layar);
	cout << endl;

	return 0;
}



