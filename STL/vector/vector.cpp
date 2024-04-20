#include<iostream.h>      // we can also use #include<bits/stdc++.h>
#include<vector>
using namespace std;

void display(vector<int> &v); //wil define it letter

int main()
{
    int i,x,d;
    vector<int> A;  //create object of type vector
    cout<<"Enter five integer value"<<endl;
    for (i=0;i<5; i++)
    {
        cin>>x;
        A.push_back(x);   // to insert value in last positiom
    }

    cout<<"Size of arrey is "<<A.size()<<endl;   // size() will return size of vector
    
    cout<<"At what position you want to insert value ";
    cin>>x;
    cout<<"Enter value that you want to insert"<<endl;
    cin>>d;
   
    vector<int>::iterator itr_b=A.begin();    // A.begin() returns reference of first element similerly 
    vector<int>::iterator itr_e=A.end();    //  A.end() do it for last position                                          
   
    A.insert(A.begin() + x-1 ,d);
    display(A);
   
    cout<<"which element you want to easer enter it's position"<<endl;
    cin>>x;
    A.erase(itr_b+x-1);  // used to delete single as well as multiple value (have to pass range in case of multiple value)
    display(A);
    
    cout<<"Element present at position 3 is "<<A.at(2); // to return value at given position (indexing is start from 0)
    return 0;

}
void display(vector<int> &v)
{
    //iterate by using normal for loop
   /* int i;
    for (i=0;i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    */

   /*  with help of lterator */
   /*for(auto it=v.begin();it!=v.end();++it)
   // auto keword use to automatically determine data type of variable
   {
        cout<<*it<<endl;
   }
   */
    
    // best way
    for(int value: v)   
    /*all the value of v is copied into value  so any change made on it does't effect actual value
    //if we want to pass actual value of v the we have to write (int &value)*/                    
    {
        cout<<value<<endl;
    }

}
