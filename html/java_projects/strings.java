import java.util.*;

import javax.xml.transform.Source;
public class strings {
public static void main( String args[]){
    //String declaration
    /*String name = "Mohit";
    String Fullname = "Mohit Reezal";
    System.out.println(name);
    System.out.println(Fullname);*/
    /*System.out.println("Enter your name");
    Scanner sc= new Scanner(System.in);
    String name= sc.nextLine();
    System.out.println("Your name is "+ name);*/
    //Concatenation
    String firstname= "Mohit";
    String lastname= "Reezal";
    String fullname= firstname+" "+lastname;
    System.out.println("Your full name is "+ fullname);
    System.out.println(fullname.length());
    for(int i=0; i<fullname.length();i++){  //To print each character
        System.out.println(fullname.charAt(i));
    }
}
}
