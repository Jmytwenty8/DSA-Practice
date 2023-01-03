//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
    bool check(vector<int>& piles, int H, long long mid){
        long long cnt = 0;
        
        for(int i=0;i<piles.size();i++){
            cnt += piles[i]/mid;
            if(piles[i]%mid != 0){
                cnt++;
            }
        }
        return cnt <= H;
    }
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        
        sort(piles.begin(),piles.end());
        
        long long lo = 1;
        long long hi = 1000000000;
        long long ans = -1;
        while(lo<=hi){
            long long mid = (lo+hi)/2;
            if(check(piles,H,mid)){
                ans = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends