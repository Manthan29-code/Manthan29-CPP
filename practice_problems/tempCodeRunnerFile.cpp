 vector <string> ans;
// //Function to return the lexicographically sorted power-set of the string.
// vector <string> powerSet(string s, string temp="", int i=0 )
// {
//    //Your code here
//    if(i==0)
//    {
//        ans.push_back(temp);
//    }
//    if (i==s.length())
//    {
//       return ans;
//    }
//    ans.push_back(temp+s[i]);
   
//    return (powerSet(s,temp,i+1), powerSet(s,temp+s[i],i+1));
   
// }

// int main()
// {
//     string name="man";
//     powerSet(name);
//     for(string n: ans)
//     {
//         cout<<n<<endl;

//     }
//     return 0;
// }