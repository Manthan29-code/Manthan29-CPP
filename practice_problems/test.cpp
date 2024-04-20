#include<iostream.h>
#include<vector>
using namespace std;
vector <string> powerSet(string s, vector <string> &ans, string temp="", int i=0 )
{
   //Your code here
   if (i==s.length())
   {
       ans.push_back(s);
       return ans;
   }
   powerSet(s,ans,temp,i+1);
   powerSet(s,ans,temp+s[i],i+1);
};
int main()
{
    vector <string> set;
    set=powerSet("man");
}