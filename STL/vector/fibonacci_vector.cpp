#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A={0,1}; //fibonacci
    vector<int> B={1};   //factorial
    int i;
    for(i=2;i<=10;i++)
    {
        A.push_back(A[i-1]+A[i-2]);
    }
    cout<<"**************************************************"<<endl;
    for(int value:A)
    {
        cout<<value<<endl;
    } 

    for(i=2;i<=10;i++)
    {
        B.push_back(i*B[0+(i-2)]);
    }

    for(int value:B)
    {
        cout<<value<<endl;
    }
    return 0;
}  