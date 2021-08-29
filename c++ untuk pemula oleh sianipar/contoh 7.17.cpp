//Contoh: Fungsi substr 

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string kalimat; //Baris 1
    string str; //Baris 2

	kalimat = "Hari ini berawan dan hangat."; //Baris 3

    cout << "Baris 4: substr(0, 5) di dalam \""
         << kalimat << "\" = \""
         << kalimat.substr(0, 5) << "\"" << endl; //Baris 4

    cout << "Baris 5: substr(6, 6) di dalam \""
         << kalimat << "\" = \""
         << kalimat.substr(6, 6) << "\"" << endl; //Baris 5

    cout << "Baris 6: substr(6, 16) di dalam \""
         << kalimat << "\" = " << endl
         << " \"" << kalimat.substr(6, 16)
         << "\"" << endl; //Baris 6

    cout << "Baris 7: substr(17, 10) di dalam \""
         << kalimat << "\" = \""
         << kalimat.substr(17, 10) << "\"" << endl; //Baris 7

    cout << "Baris 8: substr(3, 6) di dalam \""
         << kalimat << "\" = \""
         << kalimat.substr(3, 6) << "\"" << endl; //Baris 8

    str = kalimat.substr(0, 8); //Baris 9

    cout << "Baris 10: " << "str = \"" << str
         << "\"" << endl; //Baris 10

    str = kalimat.substr(2, 10); //Baris 11

    cout << "Baris 12: " << "str = \"" << str
         << "\"" << endl; //Baris 12

    return 0;
}