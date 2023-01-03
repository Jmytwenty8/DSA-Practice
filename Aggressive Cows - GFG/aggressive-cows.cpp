//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    bool check(int k, vector<int>& stalls, long long mid){
        int cnt = 1, last_cow = stalls[0];
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-last_cow >= mid){
                cnt++;
                last_cow = stalls[i];
            }
        }
        
        return cnt >= k;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        long long lo = 1;
        long long hi = *max_element(stalls.begin(),stalls.end());
        
        sort(stalls.begin(),stalls.end());
        int ans = -1;
        
        while(lo<=hi){
            long long mid = (lo+hi)/2;
            if(check(k,stalls,mid)){
                // cout<<mid<<" ";
                ans = mid;
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        return hi;
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

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends