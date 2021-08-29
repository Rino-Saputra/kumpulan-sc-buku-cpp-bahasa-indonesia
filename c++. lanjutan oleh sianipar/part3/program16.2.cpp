#include<iostream>
#include<numeric>
using namespace std;

int main()
{
    int S[5] = {5, 20, 40, 80, 160};
    int A[5];

    adjacent_difference( S, S+5, A); // A adalah runtun lain.

    for (int i =0; i<5;i++)
      cout<< A[i]<<" ";

    cout <<"\n";
    return 0 ;
}