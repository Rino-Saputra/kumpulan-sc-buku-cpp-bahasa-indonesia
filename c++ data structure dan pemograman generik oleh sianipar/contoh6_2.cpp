//***************************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana menggunakan kelas STL
// queue di dalam program.
//***************************************************************

#include <iostream> 
#include <queue> 

using namespace std; 

int main() 
{ 
    queue<int> intAntrian;

    intAntrian.push(26); 
    intAntrian.push(18); 
    intAntrian.push(50); 
    intAntrian.push(33); 

    cout << "Baris 11: Elemen terdepan antrian intAntrian: "
         << intAntrian.front() << endl; 

    cout << "Baris 12: Elemen terakhir dari intAntrian: "
         << intAntrian.back() << endl;

    intAntrian.pop(); 

    cout << "Baris 14: Setelah operasi pop, "
         << "elemen depan dari intAntrian: "
         << intAntrian.front() << endl; 
 
    cout << "Baris 15: Elemen-elemen intAntrian: "; 

    while (!intAntrian.empty()) 
	{ 
        cout << intAntrian.front() << " "; 
        intAntrian.pop(); 
	} 
    cout << endl; 

    return 0; 
}