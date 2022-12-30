//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    
    int lo = 0;
    int hi = n-1;
    
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid] == x){
            if(arr[mid+1] == x){
                lo = mid+1;
            }else{
                hi = mid;
                break;
            }
        }else if(arr[mid]>x){
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }
    
    lo = 0;
    int hi2 = hi;
    while(lo<=hi2){
        int mid = (lo+hi2)/2;
        if(arr[mid]==x){
            if(arr[mid-1] == x){
                hi2 = mid-1;
            }else{
                lo = mid;
                break;
            }
        }else if(arr[mid]>x){
            hi2 = mid-1;
        }else{
            lo = mid+1;
        }
    }
    
    if(arr[lo] != x){
        return {-1,-1};
    }
    return {lo,hi};
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends