//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            String s = sc.next();
            Solution obj = new Solution();
            System.out.println(obj.reverseWords(s));
            t--;
        }
    }
}

// } Driver Code Ends



class Solution 
{
    //Function to reverse words in a given string.
    String reverseWords(String S)
    {
        // code here 
        
        ArrayList<String> arr = new ArrayList<>();
        StringBuilder sb = new StringBuilder();
        for(int i = 0;i<S.length();i++){
            if(S.charAt(i) == '.'){
                arr.add(sb.toString());
                sb.setLength(0);
                sb.append(S.charAt(i));
                arr.add(sb.toString());
                sb.setLength(0);
            }else{
                sb.append(S.charAt(i));
            }
        }
        arr.add(sb.toString());
        sb.setLength(0);
        
        Collections.reverse(arr);
        for(String i:arr){
            sb.append(i);
        }
        
        return sb.toString();
    }
}