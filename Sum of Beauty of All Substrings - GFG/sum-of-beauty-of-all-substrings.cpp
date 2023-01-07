//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
        // Your code goes here
        
        int count = 0;
        
        for(int i=0;i<s.size();i++){
            int freq[26] = {0};
            
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                int mx = INT_MIN;
                int mi = INT_MAX;
                
                for(int k=0;k<26;k++){
                    if(freq[k] != 0){
                        mx = max(mx,freq[k]);
                        mi = min(mi,freq[k]);
                    }
                }
                
                count += mx-mi;
            }
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends