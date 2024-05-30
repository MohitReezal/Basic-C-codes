import java.util.*;

public class array {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int size= sc.nextInt();
        int marks[] = new int[size];
        for(int i=0; i<size; i++){
            marks[i]= sc.nextInt();
        }
       /*  marks[0]= 95;
        marks[1]= 98;
        marks[2]= 99;*/
        for(int i=0; i<size; i++){
            System.out.println(marks[i]);
        }
    }
}
