//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow(string s, string p) {
        // If p is longer than s, there's no way to find a window containing all the characters in p
        if(s.size() < p.size()) return "-1";
        
        unordered_map<char, int> toBeSearched, toSearchIn;
        int need = 0, have = 0;
        int res = 1000009;
        string result = "";
        
        // Count the frequency of characters in p
        for(auto i : p) {
            toBeSearched[i]++;
            need++;
        }
        
        int l = 0, r = 0;
        
        while(r < s.size()) {
            // Move the right pointer to find a window that contains all characters in p
            while(r < s.size() && have < need) {
                if(toBeSearched.find(s[r]) != toBeSearched.end()) {
                    toSearchIn[s[r]]++;
                    if(toSearchIn[s[r]] <= toBeSearched[s[r]]) {
                        have++;
                    }
                }
                r++;
            }
            
            // If a window containing all characters in p is found, move the left pointer to find the minimum length window
            while(l < r && have == need) {
                if(res > r-l) {
                    res = r-l;
                    result = s.substr(l, res);
                }
                
                if(toBeSearched.find(s[l]) != toBeSearched.end()) {
                    toSearchIn[s[l]]--;
                    if(toSearchIn[s[l]] < toBeSearched[s[l]]) {
                        have--;
                    }
                }
                l++;
            }
        }
        
        if(res == 1000009) {
            result = "-1";
        }
        
        return result;
    }

};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends