#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name1="manthan";
    string name2=" movaliya";   // creating object of string class
    string name3=name1 + name2;
    cout<<name1<<endl;
    cout<<name1<<endl;
    cout<<name3<<endl;

    //methode for stringclass
    cout<<name2.length()<<endl;
    if(name2.empty())  // return true is string is empty
    { 
        cout<<"string is empty"<<endl;
    }
    cout<<name2.length()<<endl;
    cout<<name2.size()<<endl;
    cout<<name2.capacity()<<endl;
    name1.append(name2);
    cout<<name1<<endl;

    string s1="vs cod";
    s1.push_back('e');
    cout<<s1<<endl;
    s1.insert(2,"isual"); // s1.insert(2,"isual",3)   only insert first 3 alphabate
    cout<<s1<<endl;
    return 0;   


}