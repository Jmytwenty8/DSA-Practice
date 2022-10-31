class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return solve(amount,coins,n-1,dp);
    }
    
    int solve(int amount, vector<int>& coins, int ind,vector<vector<int>> &dp){
        
        if(amount < 0 || ind < 0){
            return 0;
        }
        
        if(amount == 0){
            return 1;
        }
        
        if(dp[ind][amount] != -1) return dp[ind][amount];
        int take = 0;
        if(amount >= coins[ind]) take = solve(amount-coins[ind],coins,ind,dp);
        
        int notTake = solve(amount,coins,ind-1,dp);
        
        return dp[ind][amount] =  take+notTake;
    }
};