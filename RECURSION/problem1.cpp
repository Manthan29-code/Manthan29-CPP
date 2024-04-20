#include<iostream.h>
using namespace std;

void printarrey(int *a , int size,int key,int num=0)
{   
    if(size=1)
    {
        cout<<"answer is:"<<num;
        return ;
    };
    int i;
    for(i=0;i<size;i++)
    {   
        cout<<a[i]<<"\t";
        if(a[0] + a[i+1] == key)
        {
            num+=1;
        };
    };
    cout<<endl;
    int *newa=&(*(a+1));
    printarrey(newa , size-1,key,num);
}
int main()
{   int size,key=7;
    int a[]={1,2,3,4,5};
    size=sizeof(a)/sizeof(a[0]);
    printarrey(a,size,key,0);
    return 0;
}