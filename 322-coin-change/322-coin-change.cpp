class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        vector<long long> dp(amount+1,INT_MAX);
        dp[0] = 1;
        
        for(int i=1;i<=amount;i++){
            for(int j=0;j<coins.size();j++){
                if(i>=coins[j]){
                    dp[i] = min(dp[i],dp[i-coins[j]]+1);
                }
            }
        }
        // for(auto i: dp){
        //     cout<<i<<" ";
        // }cout<<endl;
        return dp[amount] == INT_MAX ? -1 : dp[amount] - 1;
        
    }
};