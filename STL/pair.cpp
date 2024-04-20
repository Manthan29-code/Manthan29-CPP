#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p;  // you can make pair of any two data 
    //p=make_pair(2,"Manthan");
    p={2,"Manthan"};
    pair<int,string> &p_copy=p;
    cout<<p.first<<" "<<p.second<<endl;  // to access element in pair
    p.first=3;      // it's allowed to change value in pair
    cout<<p.first<<" "<<p.second<<endl;
    p_copy.first=10;         // it also change value in pair p.first
    cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    //*******************************************************************************************************************************************//
    //*******************************************************************************************************************************************//
    //*******************************************************************************************************************************************//
    //array of pair

    pair<int,float> a[3];
    a[0]={1,57.83};
    a[1]={2,29.464};
    a[2]={3,468.92};
    cout<<"Element befor swap"<<endl;
    for(int i=0;i<3 ; i++)
    {
        cout<<a[i].first<<' '<<a[i].second<<endl;
    }
    cout<<"Value after swap"<<endl;
    swap(a[1],a[2]);
    for(int i=0;i<3 ; i++)
    {
        cout<<a[i].first<<' '<<a[i].second<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    //***************************************************************************************************************************************//

    //nested pair

    pair<int,pair<int,string>> np;
    np={34,{1,"MOVALIYA"}};
    cout<<np.first<<" ";
    cout<<np.second.first<<" ";
    cout<<np.second.second<<endl;
    return 0;   
}