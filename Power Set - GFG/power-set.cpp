//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void solve(string s,vector<string>& res, int index, string op){
	        if(index == s.size()-1){
	            res.push_back(op);
	            return;
	        }
	        
	        solve(s,res,index+1,op+s[index+1]);
	        solve(s,res,index+1,op);
	        
	        
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> res;
		    solve(s,res,-1,"");
		    sort(res.begin(), res.end());
		    res.erase(res.begin()+0);
		    return res;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends