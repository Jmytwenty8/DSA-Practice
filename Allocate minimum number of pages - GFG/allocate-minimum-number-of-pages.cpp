//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    
    bool check(int A[], int N, int M, int mid){
        int cnt = 1, pages = 0;
        for(int i=0;i<N;i++){
            pages += A[i];
            if(pages > mid){
                cnt++;
                pages = A[i];
            }
            
        }
        
        return cnt <= M;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        // sort(A,A+N);
        int lo = *max_element(A,A+N), hi=0;
        for(int i=0;i<N;i++){
            hi += A[i];
        }
        int ans = -1;
        
        if(N<M) return ans;
        
        while(lo<=hi){
            int mid =(lo+hi)/2;
            if(check(A,N,M,mid)){
                ans = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends