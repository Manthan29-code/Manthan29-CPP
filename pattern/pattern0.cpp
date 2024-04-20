#include<iostream.h>

int main()
{
   for(int i=50;i!=0;i--)
   {
      for(int j=0;j!=50;j++)
      {
         if( (i>j) || ((i+j) >= 50) )
         {
            if( (i>j) && ((i+j) >= 50) )
            {
                std::cout<<" ";
            }else
            {
                std::cout<<"*";
            };
            
         }else{
            std::cout<<" ";
         }; 
      }; 
      std::cout<<"\n";
   };
}   