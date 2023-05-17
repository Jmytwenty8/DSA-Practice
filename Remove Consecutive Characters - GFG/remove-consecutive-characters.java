//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            
            String S = read.readLine().trim();
            
            Solution ob = new Solution();
            String ans = ob.removeConsecutiveCharacter(S);
            
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution{
    public String removeConsecutiveCharacter(String S){
        
        StringBuilder s = new StringBuilder();
        for(int i = 0;i<S.length();i++){
            if(s.length() > 0){
                int lastIndex = s.length()-1;
                if(S.charAt(i) == s.charAt(lastIndex)){
                    continue;
                }else{
                    s.append(S.charAt(i));
                }
            }else{
                s.append(S.charAt(i));
            }
        }
        
        return s.toString();
        
    }
}