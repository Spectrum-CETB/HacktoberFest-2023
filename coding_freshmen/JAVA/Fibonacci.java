import java.util.Scanner;
public class Fibonacci {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int a=0,b=1,count=0;
        System.out.println("Enter number: ");
        int n=sc.nextInt();
       
        
        while(count<n){
            System.out.print(a+" ");

        
            int temp= a+b;
            a=b;
            b=temp;
            count++;
            
        }
    }
}
