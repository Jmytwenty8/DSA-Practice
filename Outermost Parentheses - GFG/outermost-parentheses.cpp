//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        
        string res = "";
        int count = 0;
        for(auto i:s){
            if(i == '('){
                if(count != 0){
                    res += '(';
                }
                count++;
            }else{
                count--;
                if(count !=0){
                    res += ')';
                }
            }
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
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends