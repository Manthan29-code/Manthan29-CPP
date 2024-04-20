#include<iostream>
using namespace std;

int main()
{
    int count=0;
    char c;
    cin.get(c); // READS ALL CHARACTORS ENTERED BY THE USER ONE BY ONE AND ASSIGN TO C
    while(c!='\n')
    {
        cout.put(c);  
        count++;
        cin.get(c);        
    }
    cout<<"noumber enter by the user is: ";
    cout<<count;
    return 0;
}

