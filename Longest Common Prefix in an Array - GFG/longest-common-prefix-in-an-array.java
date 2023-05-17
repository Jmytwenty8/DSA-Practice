//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            int n = Integer.parseInt(read.readLine().trim());
            String arr[] = read.readLine().trim().split(" ");

            Solution ob = new Solution();
            System.out.println(ob.longestCommonPrefix(arr, n));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    String longestCommonPrefix(String arr[], int n){
        // code here
        
        StringBuilder sb = new StringBuilder();
        String sm = arr[0];
        int size = sm.length();
        for(int i = 1;i<n;i++){
            if(arr[i].length() < size){
                size = arr[i].length();
                sm = arr[i];
            }
        }
        
        for(int i = 0;i<sm.length();i++){
            for(int j = 0;j<n;j++){
                if(arr[j].charAt(i) == sm.charAt(i)){
                    continue;
                }else{
                    if(sb.length() == 0){
                        return "-1";
                    }else{
                        return sb.toString();
                    }
                }
            }
            sb.append(sm.charAt(i));
        }
        
        return sb.toString();
    }
}