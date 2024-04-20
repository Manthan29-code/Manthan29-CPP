//Write a c++ program to find transpose of matrix given by user

#include<iostream.h>
using namespace std;
#define I 2
#define J 4
int main(){
   int a[I][J],b[5][5],i,j;
   cout<<"Enter the vale for metrix";
   for(i=0;i<I;i++){
      for(j=0;j<J;j++){
       cout<<endl<<"a["<<i<<"]["<<j<<"]=";
       cin>>a[i][j];
      }
   }
   cout<<endl<<" matrix is\n";
   for(i=0;i<I;i++){
      for(j=0;j<J;j++){
       cout<<a[i][j]<<"\t";
      }
   cout<<endl;
   }
   cout<<endl<<"transpose of matrix is:\n";
/*   for(i=0;i<I;i++){
      for(j=0;j<J;j++){
       b[j][i]=a[i][j];
      }
   }    */
   for(j=0;j<J;j++){
      for(i=0;i<I;i++){
      cout<<a[i][j]<<"\t";
      }
   cout<<endl;
   }

   return 0;
}