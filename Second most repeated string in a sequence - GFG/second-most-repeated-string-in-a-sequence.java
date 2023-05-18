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
            int n = sc.nextInt();
            String arr[] = new String[n];
            for(int i = 0;i<n;i++)
                arr[i] = sc.next();
            
            Solution ob = new Solution();
            
            System.out.println(ob.secFrequent(arr, n));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    String secFrequent(String arr[], int N)
    {
        // your code here
        
        
        Map<String, Integer> mp = new HashMap<>();
        ArrayList<Integer> ar = new ArrayList<>();
        
        for(int i = 0;i<N;i++){
            mp.put(arr[i], 1+mp.getOrDefault(arr[i],0));
        }
        
        Set<Map.Entry<String,Integer>> tmp = mp.entrySet();
        for(Map.Entry<String,Integer> e:tmp){
            ar.add(e.getValue());
        }
        
        Collections.sort(ar, (a,b)->b.compareTo(a));
        
        Integer val = ar.get(1);
        
        for(Map.Entry<String,Integer> e:tmp){
            if(e.getValue() == val){
                return e.getKey();
            }
        }
        
        
        return "";
    }
}