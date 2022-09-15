class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        int sequence = 0;
        
        for(auto i:nums){
            mp[i]++;
        }
        
        for(auto i:nums){
            if(mp[i-1]>0){
                continue;
            }else{
                int streak = 1;
                int j = i+1;
                while(mp[j]>0){
                    streak++;
                    j++;
                }
                sequence = max(sequence,streak);
            }
        }
        
        return sequence;
    }
};