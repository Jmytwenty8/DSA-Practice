class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(int i =0 ; i < nums.size() ; i++){
            if(nums[i] < 0)
                neg.push_back(nums[i] * nums[i]);
            else
                pos.push_back(nums[i] * nums[i]);
                
        }
        reverse(neg.begin(),neg.end());
        for(int i : pos)
            cout<<i<<" ";
        cout<<endl;
        for(int i : neg)
            cout<<i<<" ";
        cout<<endl;
        vector<int>ans;
        int i =0 ;
        int j = 0;
        while(i < pos.size() && j < neg.size()){
            if(pos[i] < neg[j]){
                ans.push_back(pos[i]);
                i++;
            }
            else{
                ans.push_back(neg[j]);
                j++;
            }
        }
        while(i< pos.size()){
            ans.push_back(pos[i]);
            i++;
        }
        while(j< neg.size()){
            ans.push_back(neg[j]);
            j++;
        }
        return ans;
    }
};