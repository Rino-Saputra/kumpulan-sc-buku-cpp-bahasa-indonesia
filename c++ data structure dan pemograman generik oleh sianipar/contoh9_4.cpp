//***************************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana operasi-operasi 
// diterapkan pada kontainer map/multimap.
//***************************************************************

#include <iostream> 
#include <map> 
#include <string> 
#include <utility> 
#include <iterator> 
#include <algorithm>

using namespace std; 

int main() 
{ 
    map<int, int> intMap; 
    map<int, int>::iterator mapItr; 

	intMap.insert(make_pair(1, 16)); 
    intMap.insert(make_pair(2, 8)); 
    intMap.insert(make_pair(4, 20)); 
    intMap.insert(make_pair(3, 3)); 
    intMap.insert(make_pair(1, 23)); 
    intMap.insert(make_pair(20, 18)); 
    intMap.insert(make_pair(8, 28)); 
    intMap.insert(make_pair(15, 60)); 
    intMap.insert(make_pair(6, 43)); 
   // intMap.insert(pair<int, int>(12, 16)); 

	cout << "Baris 21: Elemen-elemen dari intMap" << endl; 
    for (mapItr = intMap.begin();
            mapItr != intMap.end(); mapItr++) 
        cout << mapItr->first << "\t"
             << mapItr->second << endl; 
    cout << endl; 

	intMap.erase(12);

	mapItr = intMap.begin(); 
    ++mapItr; 
    ++mapItr; 
    intMap.erase(mapItr); 

	cout << "Baris 30: Setelah menghapus, elemen-elemen dari "
         << "intMap" << endl; 
    for (mapItr = intMap.begin();
            mapItr != intMap.end(); mapItr++) 
        cout << mapItr->first << "\t"
             << mapItr->second << endl; 

	cout << endl; 

	multimap<string, string> namaMultiMap; 
    multimap<string, string>::iterator namaItr; 

	namaMultiMap.insert(make_pair("A1", "Danau")); 
    namaMultiMap.insert(make_pair("B1", "Toba")); 
    namaMultiMap.insert(make_pair("K1", "Singkarak"));
    namaMultiMap.insert(make_pair("A2", "Rinjani")); 
    namaMultiMap.insert(make_pair("D1", "Siantar")); 
    namaMultiMap.insert(make_pair("A1", "Medan")); 

	cout << "Baris 42: namaMultiMap: " << endl;
    for (namaItr = namaMultiMap.begin();
           namaItr != namaMultiMap.end(); namaItr++) 
        cout << namaItr->first << "\t"
             << namaItr->second << endl; 
    cout << endl; 

	return 0; 
}