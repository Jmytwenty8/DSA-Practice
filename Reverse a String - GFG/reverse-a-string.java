//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.io.*;
import java.lang.*;

class Driver
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        
        while(t-- >0)
        {
            String str = read.readLine();
            System.out.println(new Reverse().reverseWord(str));
        }
    }
}
// } Driver Code Ends


//User function Template for Java


class Reverse
{
    // Complete the function
    // str: input string
    public static String reverseWord(String str)
    {
        // Reverse the string str
        StringBuilder lul = new StringBuilder(str);
        
        int j = lul.length()-1;
          for(int p = 0;p < lul.length()/2;p++){
              char temp = lul.charAt(p);
              lul.setCharAt(p,lul.charAt(j));
              lul.setCharAt(j, temp);
              j--;
        }
        
        return lul.toString();
    }
}