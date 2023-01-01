//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here 
        
        long long int lo = 1;
        long long int hi = x;
        
        while(lo<=hi){
            
            long long int mid = (lo+hi)/2;
            if(mid * mid == x){
                return mid;
            }else if(mid*mid>x){
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        
        return min(hi,lo);
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends