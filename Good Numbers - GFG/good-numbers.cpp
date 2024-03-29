//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    bool good(int num, int D, int rightRem){
        if(num == 0){
            return true;
        }
        int rem = num % 10;
        if(rem == D || rem <= rightRem){
            return false;
        }
        
        rightRem += rem;
        
        return good(num/10,D,rightRem);
    }
    
    
    vector<int> goodNumbers(int L, int R, int D) {
        // code here
        vector<int> res;
        for(int i=L; i<=R; i++){
            int rightRem = i%10;
            if(rightRem == D){
                continue;
            }else{
               if(good(i/10,D,rightRem) == true){
                    res.push_back(i);
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
        int L, R, D;
        cin >> L >> R >> D;
        Solution ob;
        vector<int> ans = ob.goodNumbers(L, R, D);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends