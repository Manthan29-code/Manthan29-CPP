/*
Given a keypad as shown in the diagram, and an N digit number which is represented by array a[ ], 
the task is to list all words which are possible by pressing these numbers.
*/

// #include<bits/stdc++.h>
// #include<string.h>
// vector <string> ans;
// vector <string> key={{},{},{"abc"},{"def"},{"ghi"},{"jkl"},{"pors"},{"tuv"},{"wxyz"}};
// //Function to find list of all words possible by pressing given numbers.
// vector<string> possibleWords(int a[], int N,string ANS="",int i=0)
// {
//     //Your code here
//     int j=0;
//     if(i==N)
//     {
//         ans.push_back(ANS);
        
//     }
//     else{
//         for(j=0;j<key[a[i]].size();j++)
//         {
//             possibleWords(a, N,ANS+key[a[i]][j], i+1);
//         }
//     }
//     return (ans);
// };

int main()
{     
    int arr[]={2,1,4,4};
    vector <string> &v= possibleWords(arr, 4 );
    return 0;
}