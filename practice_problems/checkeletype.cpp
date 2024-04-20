/*
		      NAME-->Manthan Movaliya J.
		      DOC-->20/6

*/
#include<iostream.h>
using namespace std;

int main(){
    char a;
    cout<<"enter the element";
    cin>>a;
    if((a>='A'&& a<='Z') || (a>='a'&&a<='z')){
    cout<<endl<<"The element  is charecter";
    }else if(a>='0'&& a<='9'){
    cout<<endl<<"The element  is number";
    }else{
    cout<<endl<<"The elemetn is special charcter";
    };
    return 0;
}
