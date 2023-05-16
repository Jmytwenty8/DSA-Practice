//{ Driver Code Starts
import java.lang.*;
import java.io.*;
import java.util.*;
class GFG
{
	public static void main (String[] args) throws IOException
	{
	 BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	 int tc=Integer.parseInt(br.readLine().trim());
	 
	 while(tc-- >0)
	 {
	     String line=br.readLine().trim();
	     
	     Solution obj = new Solution();
	     
	     System.out.println(obj.getMaxOccuringChar(line));
	     
	 }
	 }
}
// } Driver Code Ends



class Solution
{
    //Function to find the maximum occurring character in a string.
    public static char getMaxOccuringChar(String line)
    {
        // Your code here
        SortedMap<Character,Integer> mp = new TreeMap<>();
        
        for(int i = 0;i<line.length();i++){
            mp.put(line.charAt(i),1+mp.getOrDefault(line.charAt(i),0));
        }
        
        Set<Map.Entry<Character,Integer>> tmp = mp.entrySet();
        char ans = '1';
        Integer res = Integer.MIN_VALUE;
        
        for(Map.Entry<Character,Integer> e: tmp){
            if(e.getValue() > res){
                res = e.getValue();
                ans = e.getKey();
            }
        }
        
        return ans;
    }
    
}