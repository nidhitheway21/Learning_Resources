import java.util.*;

public class Fibonacci {
    
    static long fib(int n){
        if(n==0){
            return 0;
        }
        else if(n==1 || n==2){
            return 1;
        }
        return fib(n-1) + fib(n-2);
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the number of terms: ");
        int n = in.nextInt();
        for(int i=0; i<n; i++){
            System.out.println(fib(i));
        }
    }
}
