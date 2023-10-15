//{ Driver Code Starts
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
            int N = Integer.parseInt(read.readLine());
            Solution ob = new Solution();
            System.out.println(ob.isPrime(N));
        }
    }
}
// } Driver Code Ends


class Solution{
    static int isPrime(int N){
        int m=0,flag=0;
        int n=N;
        m = n/2;
		if(n==0 || n==1){
		return 0;
		}
		else{
		for(int i=2; i<=m; i++){
		if(n%i==0){
			
			flag = 1;
			return 0;
		}
		}
		if(flag == 0){
			return 1;
		}
		}
        return 2;
        
    }
    
}