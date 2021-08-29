//**************************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana menggunakan fungsi 
// pair dan make_pair.
//**************************************************************

#include <algorithm> 
#include <iostream> 
#include <utility> 
#include <string> 

using namespace std; 

void fungEksp(pair<int,int>); 
void fungEksp1(pair<int, char>); 
void fungEksp2(pair<int, string> x); 
void fungEksp3(pair<int, char *> x); 

int main() 
{ 
    pair<int, double> x(50, 87.67); 
    pair<string, string> nama("Danau", "Toba"); 
    
	cout << "Baris 14: " << x.first << " " << x.second
         << endl; 
    cout << "Baris 15: " << nama.first << " "
         << nama.second << endl; 

	pair<int, int> y; 
    cout << "Baris 17: " << y.first << " " << y.second
         << endl; 

	pair<string, string> nama2; 
    cout << "Baris 19: " << nama2.first << "***"
         << nama2.second << endl; 
    fungEksp(make_pair(75, 80));
    fungEksp1(make_pair(87, 'H')); 
    fungEksp1(pair<int, char>(198, 'K')); 
    fungEksp2(pair<int, string>(250, "Hallo"));
    fungEksp2(make_pair(65,string("Danau Toba"))); 
    fungEksp3(pair<int, char *>(35, "Danau Toba")); 
    fungEksp3(make_pair(22, (char *)("Senggigi"))); 

	return 0; 
} 

void fungEksp(pair<int, int> x) 
{ 
    cout << "Baris 31: " << "Dalam fungsiEksp: " << x.first
<< " " << x.second << endl; 
}

void fungEksp1(pair<int, char> x) 
{ 
    cout << "Baris 36: " << "Dalam fungsiEksp1: " << x.first 
         << " " << x.second << endl; 
} 

void fungEksp2(pair<int, string> x) 
{ 
    cout << "Baris 40: " << "Dalam fungEksp2: " << x.first
         << " " << x.second << endl; 
} 

void fungEksp3(pair<int, char *> x) 
{ 
    cout << "Baris 44: " << "Dalam fungEksp3: " << x.first
         << " " << x.second << endl; 
}