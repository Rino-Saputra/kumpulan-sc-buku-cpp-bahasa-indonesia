//**********************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana menggunakan sebuah 
// kontainer list dalam program.
//**********************************************************

#include <iostream> 
#include <list> 
#include <iterator> 
#include <algorithm> 

using namespace std; 

int main()
{ 
    list<int> intList1, intList2;
    
	ostream_iterator<int> layar(cout, " "); 

	intList1.push_back(23); 
	intList1.push_back(58); 
	intList1.push_back(58); 
	intList1.push_back(36); 
	intList1.push_back(15); 
	intList1.push_back(98); 
	intList1.push_back(58); 

	cout << "Baris 17: intList1: "; 
    copy(intList1.begin(), intList1.end(), layar); 
    cout << endl; 

	intList2 = intList1; 
    
	cout << "Baris 21: intList2: "; 
    copy(intList2.begin(), intList2.end(), layar); 
    cout << endl; 

	intList1.unique(); 

	cout << "Baris 25: Setelah menghapus beberapa duplikat, "
         << " intList1: "; 
    copy(intList1.begin(), intList1.end(), layar); 
    cout << endl; 

	intList2.sort(); 

	cout << "Baris 29: Setelah pengurutan, intList2: "; 
    copy(intList2.begin(), intList2.end(), layar); 
    cout << endl; 

	return 0; 
}