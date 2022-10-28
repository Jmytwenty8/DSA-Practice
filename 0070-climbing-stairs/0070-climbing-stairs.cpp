class Solution {
public:
//     int climbStairs(int n) {
        
//         vector<int> dp(n+1,-1);
//         solve(n,dp);
        
//         return dp[n];
//     }
    
//     int solve(int n, vector<int>& dp){
//         if(n == 0){
//             return 1;
//         }
        
//         if(dp[n] != -1) return dp[n];
//         int oneStep = 0;
//         if(n > 0) oneStep = solve(n-1,dp);
//         int twoStep = 0;
//         if(n > 1) twoStep = solve(n-2,dp);
        
//         return dp[n] = oneStep + twoStep;
//     }
    
//     int climbStairs(int n){
//         vector<int> dp(n+1);
        
//         dp[0] = dp[1] = 1;
        
//         for(int i=2;i<n+1;i++){
//             dp[i] = dp[i-1]+dp[i-2];
//         }
        
//         return dp[n];
//     }
    
    int climbStairs(int n){
        int prev1 = 0, prev2 = 1, cur = 0;
        
        for(int i=1;i<=n;i++){
            cur = prev1 + prev2;
            prev1 = prev2;
            prev2 = cur;
        }
        
        return cur;
    }
};