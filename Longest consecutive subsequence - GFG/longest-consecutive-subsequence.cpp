//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_map<int,int> mp;
      int res = 0;
      
      for(int i=0;i<N;i++){
          mp[arr[i]]++;
      }
      
      for(int i=0;i<N;i++){
          if(mp.find(arr[i]-1) != mp.end()){
              continue;
          }else{
              int streak = 1;
              int next = arr[i]+1;
              while(mp.find(next) != mp.end()){
                  streak++;
                  next++;
              }
              res = max(streak,res);
          }
      }
      
      return res;
      
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends