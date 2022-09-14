class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        
        int l =0,r = 0;
        int maxx = 0;
        
        while(r<s.length()){
            if(mp.find(s[r])==mp.end()){
                mp[s[r]] = r;
            }else{
                l = max(l,mp[s[r]]+1);
                mp[s[r]] = r;
            }
            maxx = max(maxx,r-l+1);
            r++;
        }
        
        return maxx;
        
    }
};