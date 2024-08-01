/*
Explanation of function of algorithme 
1)count
2)count_if
3)for_each
4)remove
5)reverse
6)transform
*/

#include<bits/stdc++.h>
using namespace std;
// bool even(int a)
// {
//     return !(a%2);
// };

// int square(int &i)
// {
//     i*=i;
//     cout<<i<<" ";
//    return i;
// }

int main()
{
    //vector<int> A(10,1);
    vector<int> b={1,2,4,5,2,1,4,3,5,2,2,1,6,7,4};
    //vector<int> c;
    int i=0;
    // for(int &value:A)
    // {
    //     A[i++]=value +i;
    // }
    // cout<<"**************************************************"<<endl;
    // for(int value:A)
    // {
    //     cout<<value<<"\t";
    // }
    // i=count(b.begin(),b.end(),2);
    // cout<<"\nNumber of 2 present in b is "<<i<<endl;
    // i=count_if(b.begin(),b.end(),even);  
    // // use to count a number of element present in b for which even() return true



    // for_each(A.begin(),A.end(),square);  // it does't change actual value of container
    //                                      // untill we pass value as reference
    // // to apply operation on element
    // //basically this function pass all the element fall in range to function given in argument 
    // cout<<"After using for_each"<<endl;
    // cout<<"value in A are:"<<endl;
    // for(int value:A)
    // {
    //     cout<<value<<"\t";
    // }
    // cout<<endl<<endl;


    // remove(b.begin(),b.end(),2);  // this function remove all matched value from container
    // cout<<"Value present in b after removing 2 from b"<<endl;
    // for(int value:b)
    // {
    //     cout<<value<<"\t";
    // }
    // cout<<endl<<endl;
    
    int n=6;
    for(int i=0;(i+n)<=b.size();i+=n)
    {
        reverse(b.begin()+i,b.begin()+(i+n));
    }
    for(int value:b)
    {
        cout<<value<<"\t";
    }
    reverse(b.end()-(b.size()%n),b.end());
    cout<<endl<<endl;
    for(int value:b)
    {
        cout<<value<<"\t";
    }
    
                
    // transform(b.begin(),b.end(),b.begin(),square);
    // cout<<"finel values of b"<<endl;
    // for(int value: b)
    // {
    //     cout<<value<<"\t";
    // }
    return 0;
}  