//*************************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana menggunakan kelas 
// stack STL di dalam sebuah program.
//*************************************************************

#include <iostream> 
#include <stack> 

using namespace std;

int main() 
{ 
    stack<int> intTumpukan;

    intTumpukan.push(16); 
    intTumpukan.push(8); 
    intTumpukan.push(20);
    intTumpukan.push(3); 

    cout << "Baris 11: Elemen teratas dari intTumpukan: "
         << intTumpukan.top() << endl; 

    intTumpukan.pop(); 

    cout << "Baris 13: Setelah operasi pop, elemen "
         << "teratas dari intTumpukan: "
         << intTumpukan.top() << endl; 

    cout << "Baris 14: Elemen-elemen intTumpukan: "; 

    while (!intTumpukan.empty()) 
    { 
        cout << intTumpukan.top() << " "; 
        intTumpukan.pop(); 
    } 

    cout << endl; 
    
	return 0; 
}