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
            String S = read.readLine();
            
            Solution ob = new Solution();
            System.out.println(ob.longestSubstrDistinctChars(S));
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution{
    static int longestSubstrDistinctChars(String S){
        // code here
        
        Map<Character, Integer> mp = new HashMap<>();

        int res = 0;
        int left = 0, right = 0;
    
        while (right < S.length()) {
            char currentChar = S.charAt(right);
            
            if (mp.containsKey(currentChar)) {
                res = Math.max(res, right - left);
                
                // Move the left pointer to the next position after the last occurrence of currentChar
                int lastOccurrence = mp.get(currentChar);
                while (left <= lastOccurrence) {
                    mp.remove(S.charAt(left));
                    left++;
                }
            }
            
            mp.put(currentChar, right);
            right++;
        }
    
        res = Math.max(res, right - left);
    
        return res;
    }
}