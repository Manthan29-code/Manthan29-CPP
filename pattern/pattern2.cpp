/*
                                 **   
                                *  *
                               *    *
                              *      *
                             *        *
                              *      *
                               *    *
                                *  *
                                 **
*/
#include<iostream.h>
using namespace std;

int main()
{
    int i,j;
    for(j=4;j>0;j--)
    {
        for(i=0;i<9;i++)
        {
        if((j==i) || (j==(9-i)))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(j=0;j>=(-4);j--)
    {
        for(i=0;i<=9;i++)
        {
            if(((-j)==i) || ((-j)==(9-i)))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;

}