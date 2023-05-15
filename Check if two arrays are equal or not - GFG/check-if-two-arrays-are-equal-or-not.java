//{ Driver Code Starts
//Initial Template for Java


/*package whatever //do not write package name here */

import java.io.*;

import java.util.*;
class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		
		long t=sc.nextLong();
		
		while(t-->0)
		{
		  int n=sc.nextInt();
		  long arr[]=new long[n];
		  long brr[]=new long[n];
		  
		  for(int i=0;i<n;i++)
		  {
		      arr[i]=sc.nextLong();
		  }
		  
		  for(int i=0;i<n;i++)
		  {
		      brr[i]=sc.nextLong();
		  }
		  Solution ob = new Solution();
		  System.out.println(ob.check(arr,brr,n)==true?"1":"0");
		  
		  
		}
	}
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    //Function to check if two arrays are equal or not.
    public static boolean check(long A[],long B[],int N)
    {
        //Your code here
        
        Map<Long, Integer> mp = new HashMap<>();
        
        for(long i: B){
            mp.put(i,1+mp.getOrDefault(i,0));
        }
        
        for(long i:A){
            if(mp.get(i) == null){
                return false;
            }else{
                // System.out.println(mp.get(i));
                mp.put(i,mp.get(i)-1);
                if(mp.get(i) == 0){
                    mp.remove(i);
                }
            }
        }
        
        return true;
    }
}