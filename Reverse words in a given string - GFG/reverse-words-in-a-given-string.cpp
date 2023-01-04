//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<string> stk;
        string res ="";
        for(auto i: S){
            if(i != '.'){
                res += i;
            }else{
                stk.push(res);
                stk.push(".");
                res  = "";
            }
        }
        stk.push(res);
        res = "";
        while(!stk.empty()){
            res += stk.top();
            stk.pop();
        }
        
        return res;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends