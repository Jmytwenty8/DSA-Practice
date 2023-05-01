//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long maxScore(vector<int> &cardPoints, int N, int k) {
        long long t_sum = 0;
        long long curr = 0;
        long long res = 0;
    
        for(auto i: cardPoints){
            t_sum += i;
        }
    
        int r = 0;
        int l = 0;
        for(;r < N-k; r++){
            curr += cardPoints[r];
        }
    
        res = t_sum-curr;
    
        while(r < N){
            curr -= cardPoints[l];
            curr += cardPoints[r];
            res = max(res,t_sum - curr);
            l++;
            r++;
        }
    
        return res;
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, k;
        cin >> N >> k;

        vector<int> cardPoints(N);
        for (int i = 0; i < N; i++) cin >> cardPoints[i];

        Solution obj;
        cout << obj.maxScore(cardPoints, N, k) << endl;
    }
    return 0;
}
// } Driver Code Ends