#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int S[11] = { 10,20,30 ,36, 44, 60, 70, 80, 90,100,110};
    int A[6];

    copy(S+2, S+8, A); // A adalah tujuan

    cout<<"Elemen-elemen dari A adalah sebagai berikut:\n";
    for(int i =0; i< 6; i++)
	{
        cout << A [i] <<" ";
	}

    cout<<"\n";
    return 0 ;
}