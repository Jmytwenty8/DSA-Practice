//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	double check(int mid,int n){
	    double ans = 1.0;
	    for(int i = 1;i<=n;i++){
	        ans = ans*mid;
	    }
	    
	    return ans;
	}
	int NthRoot(int n, int m)
	{
	    // Code here.
	    
	    int lo = 1;
	    int hi = m;
	    
	    while(lo<=hi){
	        int mid = (lo+hi)/2;
	        if(check(mid,n) == m){
	            return mid;
	        }else if(check(mid, n) > m){
	            hi = mid-1;
	        }else{
	            lo = mid+1;
	        }
	    }
	    
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends