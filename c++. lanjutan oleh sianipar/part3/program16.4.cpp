#include<iostream>
# include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> V;
    int S[7] = { 10,20,30 ,36, 44, 60, 70};
	int n = 36;

    for(int i = 0; i< 7 ; i++)
        V.push_back (S[i]);

    bool B = binary_search(V.begin(), V.end(), n);

    // di sini 36 adalah nilai yang dicari.
    if ( B!=0)
        cout<<"Nilai "<<n<<" dimuat di dalam vektor V."<<endl;
    else
        cout<<n<<"Nilai yang dicari tidak ada di dalam vektor V."<<endl;

    return 0 ;
}