#include<iostream>
#include<algorithm>
#include<functional> //Ini diperlukan untuk predikat.
using namespace std;

int main()
{
    int S[ ] = {5, 6, 8, 7, 8, 3, 8, 10, 8, 12};
    int n= count_if(S, S+10, bind2nd(greater<int>(),7));
    //n adalah jumlah elemen yang nilainya lebih besar dari 7 di dalam S
    cout<<"Jumlah elemen dari S yang nilainya >7 adalah = "<<n<<endl;

    int m = count_if(S, S+10, bind2nd(less<int>(),10));
    // m adalah jumlah elemen yang nilainya kurang dari 10
    cout<<"Jumlah elemen dari S yang nilainya < 10 adalah = "<<m <<endl;

    return 0;
}