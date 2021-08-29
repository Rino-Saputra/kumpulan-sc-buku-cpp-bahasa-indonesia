#include<iostream>
#include<algorithm>
using namespace std;

int main()
{ 
    int S1[10] = { 1,2,3,4,5,6,7,8,9,10};
    int S2[10] = {0};
    int S3[10] = {0};

    cout <<"S1 adalah: ";
    for (int i =0 ; i<10; i++)
        cout<<S1[i]<<" ";

    cout <<"\nS2 adalah: ";
    copy(S1, S1+10, S2);
    for(int n =0; n<10; n++)
        cout <<S2[n]<<" ";

    copy_backward(S1, S1 + 6, S3+10);
    cout<<"\nS3 adalah: ";
    for ( int j = 0; j< 10 ; j++)
        cout<<S3[j]<<" ";

    cout<<"\n";
    return 0;
}