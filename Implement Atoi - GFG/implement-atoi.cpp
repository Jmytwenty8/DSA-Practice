//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        // if((int)str[str.size()-1] >= 10){
        //     return -1;
        // }
        int place = 1;
        int res = 0;
        
        for(int i = str.size()-1;i>=0;i--){
            if(str[i] == 45){
                if(i != 0){
                    return -1;
                }else{
                    continue;
                }
            }
            if(abs(str[i]) >= 48 && abs(str[i]) <= 57){
                str[i] -= 48;
                res += (int)str[i]*place;
                place *= 10;
            }else{
                return -1;
            }
        }
        if(str[0] == '-') return -res;
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