class Solution {
public:
    
    int mod = (int)1e9+7;
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    
        
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            if(obstacleGrid[0][i]!=1) {
                dp[0][i]=1;
            }else{
                break;
            }
        }

        for(int i=0;i<n;i++){
            if(obstacleGrid[i][0]!=1) {
                dp[i][0]=1;
            }else{
                break;
            }
        }


        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(obstacleGrid[i][j] == 1){
                    dp[i][j] = 0;
                }else{
                    dp[i][j] = (dp[i-1][j]+dp[i][j-1]);
                }
            }
        }

    //     if(dp[n-1][m-2] == -1 && dp[n-2][m-1] == -1){
    //         return 0;
    //     }
        return dp[n-1][m-1];

        }
};