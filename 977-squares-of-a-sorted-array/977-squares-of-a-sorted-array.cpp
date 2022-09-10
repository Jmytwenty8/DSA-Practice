class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int pivot = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                pivot = i;
                break;
            }
        }
        
        cout<<pivot<<endl;
        vector<int> ans;
        
        if(pivot != -1){
            int i = pivot - 1;
            int j = pivot;

            while(i>=0 && j<nums.size()){
                if(abs(nums[i])>abs(nums[j])){
                    ans.push_back(nums[j]*nums[j]);
                    j++;
                }else{
                    ans.push_back(nums[i]*nums[i]);
                    i--;
                }
            }
            
            for(auto i:ans){
                cout<<i<<" ";
            }
            cout<<endl;

            while(i>=0){
                ans.push_back(nums[i]*nums[i]);
                i--;
            }

            while(j<nums.size()){
                ans.push_back(nums[j]*nums[j]);
                j++;
            }
        }else{
            if(nums[0]>=0){
               for(auto i:nums){
                    ans.push_back(i*i);
                } 
            }else{
                for(int i=nums.size()-1;i>=0;i--){
                    ans.push_back(nums[i]*nums[i]);
                }
            }
        }
        
        return ans;
    }
};