import java.util.*;
public class function {
    public static int calculateSum(int a, int b){
int sum= a+b;
return sum;
    }
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the 1st num");
        int a = sc.nextInt();
        System.out.println("Enter the 2nd num");
        int b = sc.nextInt();
        System.out.println("The sum is");
        int sum = calculateSum(a, b);
        System.out.println(sum);
    }

}
