//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            String s;
            s = sc.next();
            
            Solution ob = new Solution();
            char res = ob.firstRep(s);
            if (res == '#')
                System.out.println(-1);
            else
                System.out.println(res);
             
        }
    }
}
// } Driver Code Ends


//User function Template for Java
class Solution
{
    char firstRep(String S)
    {
        // your code here
        Map<Character, Integer> mp = new LinkedHashMap<>();
        for(int i=0;i<S.length();i++){
            mp.put(S.charAt(i), 1+mp.getOrDefault(S.charAt(i),0));
        }
        
        Set<Map.Entry<Character,Integer>> tmp = mp.entrySet();
        for(Map.Entry<Character,Integer> e: tmp){
            if(e.getValue() > 1 ){
                return e.getKey();
            }
        }
        
        return '#';
        
    }
}