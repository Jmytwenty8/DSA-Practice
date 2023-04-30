//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    int solve(vector<int>& arr, int N, int target){
        // code here
        
        int l = 0, r = 0;
        int curr = 0;
        int count = 0;
        
        while(r<N){
            curr += arr[r];
            
            while(curr > target && l <= r){
                curr -= arr[l];
                l++;
            }
            
            count += r-l+1;
            
            r++;
        }
        
        return count;
    }
    
    int numberOfSubarrays(vector<int>& arr, int N, int target){
        return solve(arr,N,target) - solve(arr,N,target-1);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int target; 
        cin >> target;
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin >> arr[i];
        Solution obj;
        cout<<obj.numberOfSubarrays(arr, N, target)<<endl;
    }
    return 0;
}
// } Driver Code Ends