import java.util.*;
//Define pi= 3.12
public class radius {
    public static void circum(int r){
       double circumferance;
       circumferance= 2*3.14*r;
      System.out.println(circumferance);
    }
    public static void main( String [] args){
 System.out.println("Enter the value of radius");
 Scanner sc= new Scanner(System.in);
 int x = sc.nextInt();
 System.out.println("The circumferance of radius r is" );
 circum(x);
    }
    
}
