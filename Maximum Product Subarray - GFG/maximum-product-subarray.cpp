//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    
	    long long maxx1 = INT_MIN;
	    long long maxx2 = INT_MIN;
	    
	    long long curr = 1;
	    
	    for(auto i:arr){
	        curr = curr * i;
	        maxx1 = max(maxx1,curr);
	        
	        if(curr == 0){
	            curr = 1;
	        }
	    }
	    
	    curr = 1;
	    for(int i = n-1;i>=0;i--){
	        curr = curr * arr[i];
	        maxx2 = max(maxx2,curr);
	        
	        if(curr == 0){
	            curr = 1;
	        }
	    }
	    
	    return max(maxx1,maxx2);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends