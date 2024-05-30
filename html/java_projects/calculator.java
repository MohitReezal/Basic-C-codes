import java.util.*;
public class calculator {
    public static void main(String []args){
Scanner sc= new Scanner(System.in);
System.out.println("Enter the value of a");
int a= sc.nextInt();
System.out.println("Enter the value of b");
int b= sc.nextInt();
System.out.println("Enter the operation");
int calc= sc.nextInt();
int add= a+b;
int sub= a-b;
int mul= a*b;
int div= a/b;

switch(calc){
    case 1: System.out.println(add);
    break;
    case 2: System.out.println(sub);
    break;
    case 3: System.out.println(mul);
    break;
    case 4: System.out.println(div);
    break;
    case 5:  System.out.println("Invalid");
    break;
}

    }

    
}
