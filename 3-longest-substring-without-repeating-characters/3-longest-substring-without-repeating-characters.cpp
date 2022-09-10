class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        if(s.length() == 0)
            return 0;
        else if(s.length() == 1)
            return 1;
        else{
            for(int i = 0 ; i< s.length(); i++){
                bool arr[128]={false};
                arr[(int)s[i]]= true;
                int count = 1;
                int j = i+1;
                while( j < s.length() && arr[(int)s[j]] == false){
                    arr[(int)s[j]] =true;
                    j++;
                    //cout<<s[j];
                    count++;
                }
                //cout<<count<<endl;
                ans = max(ans,count);
            }
            return ans;
        }
    }
};