class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> mp;
        int sequence = 0;
        
        for(auto i:nums){
            mp.insert(i);
        }
        
        for(auto i:nums){
            if(mp.find(i-1) != mp.end()){
                continue;
            }else{
                int streak = 0;
                int j = i;
                while(mp.find(j)!=mp.end()){
                    streak++;
                    j++;
                }
                sequence = max(sequence,streak);
            }
        }
        
        return sequence;
    }
};