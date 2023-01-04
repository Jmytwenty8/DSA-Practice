//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        // your code here
        string res = "";
        int last = -1;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]%2){
                last = i;
                break;
            }
        }
        
        if(last == -1) return res;
        
        for(int i=0;i<last+1;i++){
            res += s[i];
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends