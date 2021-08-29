#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> V;
    int S[8] = {10, 20, 24, 36, 24, 24, 70};

    for(int i =0; i < 6 ;i++)
        V.push_back (S[i]);

    int n = 24;
    int m = count( V.begin(), V.end(), n);
    cout<<"Jumlah elemen dengan nilai "<<n<<" di dalam V adalah = "<< m <<endl;

    return 0; 
}