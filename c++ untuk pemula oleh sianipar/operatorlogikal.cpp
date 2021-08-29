//Bab 3 Operator logikal

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    bool ditemukan = true;
    int usia = 20;
    double jam = 45.30;
    double jamLembur = 15.00;
    int kounter = 20;
    char ch = 'B';

    cout << fixed << showpoint << setprecision(2);
    cout << "ditemukan = " << ditemukan << ", usia = " << usia
         << ", jam = " << jam << ", jamLembur = " << jamLembur
         << "," << endl << "kounter = " << kounter
         << ", ch = " << ch << endl << endl;

    cout << "!ditemukan dievaluasi menjadi " << !ditemukan << endl;
    cout << "jam > 40.00 dievaluasi menjadi " << (jam > 40.00) << endl;
    cout << "!usia dievaluasi menjadi " << !usia << endl;
    cout << "!ditemukan && (jam >= 0) dievaluasi menjadi "
         << (!ditemukan && (jam >= 0)) << endl;

    cout << "!(ditemukan && (jam >= 0)) dievaluasi menjadi "
         << (!(ditemukan && (jam >= 0))) << endl;

    cout << "jam + jamLembur <= 75.00 dievaluasi menjadi "
         << (jam + jamLembur <= 75.00) << endl;

    cout << "(kounter >= 0) && (kounter <= 100) dievaluasi menjadi "
         << ((kounter >= 0) && (kounter <= 100)) << endl;

    cout << "('A' <= ch && ch <= 'Z') dievaluasi menjadi "
         << ('A' <= ch && ch <= 'Z') << endl;

    return 0;
}