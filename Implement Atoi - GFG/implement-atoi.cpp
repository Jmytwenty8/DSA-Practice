//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    
    int solve(string s, int index,int res){
        
        if(s[index]<48 || s[index]>57){
            return -1;
        }
        
        if(index == s.size()-1){
            return res = res* 10 + s[index]-48;
            
        }
        
        res = res*10+s[index]-48;
        return solve(s,index+1,res); 
    }
    int atoi(string str) {
        //Your code here
        
        int flag = 0;
        if(str[0] == '-'){
            flag = 1;
            str[0] = '0';
        }
        
        int res = solve(str,0,0);
        
        if(flag){
            if(res < 0){
                return res;
            }else{
                return -1*res;
            }
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends