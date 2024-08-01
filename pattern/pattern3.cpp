#include<iostream.h>
using namespace std;

int main()
{
   int i,j;
   int a=0;
   char c='a';
   for(j=4;j>=0;j--)
   {
      //c+=2*(4-j);
      int k=0;
      for(i=0;i<9;i++)
      {
         if(j<=(-i+4) || j<=(i-4))
         {
            if(i<=4)
             cout<<a++<<" ";
            else
               cout<<(char)(c-(k++)+(a-1))<<" " ;
         }else{
            cout<<" ";
         }
      }
      cout<<endl;
   }
}