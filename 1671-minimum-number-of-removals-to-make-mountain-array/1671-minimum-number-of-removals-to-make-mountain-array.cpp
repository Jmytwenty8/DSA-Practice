class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        
        vector<int> LIS(nums.size(),1);
        vector<int>LDS(nums.size(),1);
        vector<int>mountain(nums.size(),0);
        int ans = INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    LIS[i] = max(LIS[i],1+LIS[j]);
                }
            }
        }
        
         for(int i=nums.size()-1;i>=0;i--){
            for(int j=nums.size()-1;j>i;j--){
                if(nums[i]>nums[j]){
                    LDS[i] = max(LDS[i],1+LDS[j]);
                }
            }
        }
         for(int i=0;i<nums.size();i++){
            if(LIS[i] !=1  and LDS[i]!=1){
                mountain[i] = LIS[i]+LDS[i]-1;
            }
            ans = max(ans,mountain[i]);
        }
        
        return nums.size()-ans;
        
    }
};