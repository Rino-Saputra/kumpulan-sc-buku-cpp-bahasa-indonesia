#include<iostream>
#include<vector>
using namespace std;

vector<int> V1;
vector<int> V2;
vector<int> V3;
vector<int> V4;

int main()
{
   V2.assign(5, 65);	//menugaskan 5 elemen, masing-masing 65, kepada V2
   V3.assign(5, 70);	//menugaskan 5 elemen, masing-masing 70, kepada V3
   V1.push_back(2);		//push_back menempatkan nilai 2 di belakang vektor V1
   V1.push_back(4);		//push_back menempatkan nilai 4 di belakang vektor V1

   V1.push_back(5);
   V1.push_back(6);
   V1.push_back(7);

   if (V2 == V1)	// uji ekualitas
      cout<< "Vektor V1 dan V2 sama"<<endl;
   else
      cout<<"Vektor V1 dan V2 tidak sama"<<endl;

   V2 = V1; //V1 ditugaskan kepada V2

   cout<<"Setelah penugasan: " << endl;
   if(V1!= V2)
      cout<<"Vektor V1 tidak sama dengan V2"<<endl;
   else
      cout<<"Vektor V1 dan V2 sama."<<endl;

   cout<<"Elemen-elemen dari V2 adalah berikut: "<<endl;
   for (int i = 0; i< 5; i++)
      cout<<" V2["<<i<<"] = "<<V2[i]<<endl;

   return 0;
}