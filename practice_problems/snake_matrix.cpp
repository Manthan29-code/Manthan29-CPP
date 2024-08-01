// print matrix in snake pattern
#include<iostream.h>
using namespace std;

int main()
{
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int c=3;
    int r=3;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if (i%2==0)
            {
                cout<<arr[i][j]<<" ";
            }else{
                cout<<arr[i][c-1-j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}