//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    
    sort(arr,arr+n);
    
    int lo = 0;
    int hi = n-1;
    
    int ceilll = -1,floorr = -1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid] == x){
            return {arr[mid],arr[mid]};
        }else if(arr[mid] > x){
            ceilll = arr[mid];
            hi = mid-1;
        }else{
            floorr = arr[mid];
            lo = mid+1;
        }
    }
    
    return {floorr,ceilll};
    
    
}