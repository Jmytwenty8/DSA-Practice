//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int lo = 0;
        int hi = n-1;
        
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(arr[mid] == x){
                if(arr[mid+1] == x){
                    lo = mid+1;
                }else{
                    hi = mid;
                    break;
                }
            }else if(arr[mid]>x){
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        
        lo = 0;
        int hi2 = hi;
        while(lo<=hi2){
            int mid = (lo+hi2)/2;
            if(arr[mid]==x){
                if(arr[mid-1] == x){
                    hi2 = mid-1;
                }else{
                    lo = mid;
                    break;
                }
            }else if(arr[mid]>x){
                hi2 = mid-1;
            }else{
                lo = mid+1;
            }
        }
        
        if(arr[lo] != x){
            return 0;
        }
        
        return hi-lo+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends