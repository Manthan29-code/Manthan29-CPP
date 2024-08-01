#include<iostream.h>
#include<fstream>
using namespace std;

int main()
{
    ofstream fcout;
    string msg;
    float num;
    float rnum;
    string smsg;
    fcout.open("basic02.txt"); // to open a file
    cout<<"enter message:"<<endl;
    getline(cin ,msg);  // to take string containing white space
    fcout<<msg;
    cout<<"you entered "<<msg<<endl;
    fcout<<endl;
    cout<<"enter float  5 number"<<endl;
    for(int i=0; i<5;i++)
    {
        cin>>num;
        fcout<<num<<endl;
    }
    fcout.close();

    ifstream fcin;
    fcin.open("basic02.txt"); // to open a file
    getline(fcin,smsg); // to take string containing white space 
    cout<<smsg<<endl;
    for(int i=0; i<5;i++)
    {
        fcin>>rnum;
        cout<<rnum<<"\t";
    }
    
    // char c;
    // fcin.get(c);
    // while(!fcin.eof())
    // {
    //     cout<<c;
    //     fcin.get(c);
    // };
    fcin.close();
    return 0;
}