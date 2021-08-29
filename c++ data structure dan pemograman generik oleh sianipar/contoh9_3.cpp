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
intMap.insert(pair<int, int>(12, 16)); 
cout << "Line 21: The elements of intMap" << endl; 
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
cout << "Line 30: After deleting, elements of "
<< "intMap" << endl; 
for (mapItr = intMap.begin();
mapItr != intMap.end(); mapItr++) 
cout << mapItr->first << "\t"
<< mapItr->second << endl; 
cout << endl; 
multimap<string, string> namesMultiMap; 
multimap<string, string>::iterator nameItr; 
namesMultiMap.insert(make_pair("A1", "Donny")); 
namesMultiMap.insert(make_pair("B1", "Zippy")); 
namesMultiMap.insert(make_pair("K1", "Ronny"));
namesMultiMap.insert(make_pair("A2", "Hungry")); 
namesMultiMap.insert(make_pair("D1", "Ronny")); 
namesMultiMap.insert(make_pair("A1", "Dumpy")); 
cout << "Line 42: namesMultiMap: " << endl;
for (nameItr = namesMultiMap.begin();
nameItr != namesMultiMap.end(); nameItr++) 
cout << nameItr->first << "\t"
<< nameItr->second << endl; 
cout << endl; 
return 0; 
}