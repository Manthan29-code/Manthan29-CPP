/*
     You are given a string. You need to return the power-set (in any order) of the string.
    Note: The string s contains lowercase letter of alphabet.
*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

vector <string> ans;
//Function to return the lexicographically sorted power-set of the string.
vector <string> powerSet(string s, string temp="", int i=0 )
{
   //Your code here
   if(i==0)
   {
       ans.push_back(temp);
   }
   if (i==s.length())
   {
      return ans;
   } 
   ans.push_back(temp+s[i]);
   
   return (powerSet(s,temp,i+1), powerSet(s,temp+s[i],i+1));
   
}

int main()
{
    string name="man";
    powerSet(name);
    for(string n: ans)
    {
        cout<<n<<endl;

    }
    return 0;
}
// int main()
// {
//     int i=0;
//     vector <string> name={"","manthan","vidhya","Movaliya","LDCE"};
//     for (string N : name)
//     {
//         // cout<<N<<" "<<name[i].size()<<endl;
//         // i++;
//         for(char i: N)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }