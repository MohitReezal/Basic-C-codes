import java.util.*;
public class age {
    public static void Age(int n){
        if (n>18) {
            System.out.println("You can vote");
        }
        else{
System.out.println("you are not eligible to vote");
        }
        
     }
     public static void main( String [] args){
  System.out.println("Enter your age");
  Scanner sc= new Scanner(System.in);
  int x = sc.nextInt();
  //System.out.println("The circumferance of radius r is" );
  Age(x);
     }
}
