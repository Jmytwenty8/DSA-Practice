class Solution {
public:
    
    
    vector<int> sortedSquares(vector<int>& nums) {
        
        sort(nums.begin(),nums.end(),[](int a,int b){
            return a*a < b*b;
        });
        
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }
        
        return nums;
        
    }
};