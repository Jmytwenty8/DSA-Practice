//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S = read.readLine();
            
            Solution ob = new Solution();
            System.out.println(ob.isPalindrome(S));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution {
    int isPalindrome(String S) {
        // code here
        
        int lo = 0;
        int hi = S.length()-1;
        
        while(lo<=hi){
            if(S.charAt(lo) == S.charAt(hi)){
                lo++;
                hi--;
            }else{
                return 0;
            }
        }
        
        return 1;
    }
};