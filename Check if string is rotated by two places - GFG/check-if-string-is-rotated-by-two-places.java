//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int t;
		t = sc.nextInt();
		String s12 = sc.nextLine();
		for(int i=0; i<t; i++){
		    String s1 = sc.nextLine();
		    String s2 = sc.nextLine();
		    
		    Solution obj = new Solution();
		    
		    boolean flag = obj.isRotated(s1, s2);
		    
		    if(flag == true) System.out.println("1");
		    else System.out.println("0");
		    
		}
	}
}
// } Driver Code Ends


class Solution
{
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    public static boolean isRotated(String str1, String str2)
    {
        // Your code herehttps://www.geeksforgeeks.org/jobs?tab=studentjobfair
        
        if (str1.length() != str2.length()) {
            return false;
        }
        
        if(str1.length() <= 2){
            return str1 == str2;
        }
        StringBuilder s1 = new StringBuilder(str1.substring(2,str1.length()));
        StringBuilder s2 = new StringBuilder(str1.substring(0,str1.length()-2));
       
        for(int i = 0;i<2;i++){
            s1.append(str1.charAt(i));
        }
        
        s2.insert(0,str1.charAt(str1.length()-1));
        s2.insert(0,str1.charAt(str1.length()-2));
        
        // System.out.println(s1.toString());
        // System.out.println(s2.toString());
        
        
        return str2.equals(s1.toString()) || str2.equals(s2.toString());
    }
    
}