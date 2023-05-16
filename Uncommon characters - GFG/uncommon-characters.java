//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main(String args[])throws IOException
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    String A = sc.next();
                    String B = sc.next();
                    Solution ob = new Solution();
                    System.out.println(ob.UncommonChars(A, B));
                }
        }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    String UncommonChars(String A, String B)
    {
        // code here
        Set<Character> s1 = new TreeSet<>();
        Set<Character> s2 = new TreeSet<>();
        
        for(int i=0;i<A.length();i++){
            s1.add(A.charAt(i));
        }
        
        for(int i=0;i<B.length();i++){
            s2.add(B.charAt(i));
        }
        
        ArrayList<Character> s = new ArrayList<>();
        
        for(Character i: s2){
            if(!s1.contains(i)){
                s.add(i);
            }
        }
        
        for(Character i: s1){
            if(!s2.contains(i)){
                s.add(i);
            }
        }
        
        if(s.size() == 0) return "-1";
        Collections.sort(s);
        StringBuilder q  = new StringBuilder();
        for(char i: s){
            q.append(i);
        }
        
        return q.toString();
    }
}