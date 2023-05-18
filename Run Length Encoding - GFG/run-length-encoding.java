//{ Driver Code Starts
import java.util.*;
 
class RLEncoding
{
   public static void main(String[] args) 
   {
 
      Scanner sc = new Scanner(System.in);
    
	  int T = sc.nextInt();
	  sc.nextLine();
	  while(T>0)
	  {
		  
		String str = sc.nextLine();
		
		GfG g = new GfG();
		System.out.println(g.encode(str));
		
      
        T--;
	  }
   }
}


// } Driver Code Ends


class GfG
 {
	String encode(String str)
	{
          //Your code here
          
        StringBuilder sb = new StringBuilder();
        
        for(int i = 0;i<str.length();i++){
            int k = i+1;
            int count = 1;
            while(k<str.length() && str.charAt(k) == str.charAt(i)){
                k++;
                count++;
            }
            sb.append(str.charAt(i));
            sb.append(count);
            i = k-1;
        }
        
        return sb.toString();
	}
	
 }