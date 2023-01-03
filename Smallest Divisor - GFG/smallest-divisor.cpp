//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool check(vector<int> &nums, int K, int mid){
        int res = 0;
        
        for(int i=0;i<nums.size();i++){
            res += ceil((float)nums[i]/mid);
        }
        return res <= K;
    }
    int smallestDivisor(vector<int>& nums, int K) {

        // Write your code here.
        long long lo = 1;
        long long hi = 1000000000;
        // int ans = -1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(check(nums,K,mid)){
                // ans = mid;
                hi = mid - 1;
            }else{
                lo = mid+1;
            }
        }
        
        return lo;
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends