
// make a programe to convert sentence in title case
#include<iostream.h>
#include<string.h>
using namespace std;

void title(char *santance, int b)
{   
     cout<<"Size of santance inside the function is="<<b<<endl; 
    int i;
   // char santance1[50];
    for(i=0;i<=b;i++)
    {
        if(santance[i] == ' ' )
        {
          if (santance[i+1]>='a' && santance[i+1]<='z' )
          {
              santance[i+1]-= 32;
          };    
        };
        if(santance[0]>='a' && santance[0]<='z' )
        {
            santance[0]-= 32;
        };
     };
};
int main(){
    char santance[50];
    cin.getline(santance,50);
    title(santance, sizeof(santance));
    cout<<santance;
    //cout<<endl<<sizeof(santance);
    return 0;  
};