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
    fcout.open("basic.txt"); // to open a file
    cout<<"enter message:"<<endl;
    getline(cin ,msg);  // to take string containing white space
    fcout<<msg;
    cout<<"you entered "<<msg<<endl;
    cout<<"enter float number"<<endl;
    cin>>num;
    fcout<<endl;
    fcout<<num<<endl;
    fcout.close();

    ifstream fcin;
    fcin.open("basic.txt"); // to open a file
    getline(fcin,smsg); // to take string containing white space 
    cout<<smsg<<endl;
    fcin>>rnum;
    cout<<rnum;
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