/*
make a function that print arrey using recurison

*/
#include<iostream.h>
using namespace std;

int printarrey(int *a , int size, int index=0)
{   
    if(index==size)
    {
       cout<<endl;
       return 0;
    };
    cout<<a[index]<<"\t";
    printarrey(a , size, index + 1);
    return 0;

}
int main()
{   int size,i;
    int a[]={3,5,67,34,76,34,87,23,89};
    size=sizeof(a)/sizeof(a[0]);
    cout<<sizeof(a)/sizeof(a[0])<<"\n";
    for(i=0;i<size;i++)
    {
        printarrey(&(*(a+i)),size-i);
    };
    return 0;
}
