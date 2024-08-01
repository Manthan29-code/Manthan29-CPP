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


    // to find substring
    char n1[]="manthan";
    char s1[]="th";
    cout<<strstr(n1,s1)<<endl;

    // string to number
    char integer[]="384257";
    char float_integer[]="384.63257";

    cout<<strtol(integer,NULL,10)<<endl;    // 10 for decimal numbersystem                           
    cout<<strtof(float_integer,NULL)<<endl;                        

    // to spilt string 
    // char spilt[]="x=10;y=56&z=92;";

    // char* spilted=strtok(spilt,"=;&");
    // while(spilted!=NULL);
    // {

    //     cout<<"out";    
    //     cout<<spilted<<endl; 
    //     spilted=strtok(NULL,"=;&");
        
    // }
    // cout<<"out";

    return 0;
}