import java.util.*;
public class findposition {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        int rows= sc.nextInt();
        int col= sc.nextInt();
        int numbers[][] = new int[rows][col];
        //input
        for(int i=0; i<rows; i++){
            for(int j=0; j<col; j++){
               numbers[i][j]= sc.nextInt();
            }
        }
        System.out.println("Enter the value of x");
        int x= sc.nextInt();
        for(int i=0; i<rows; i++){
            for(int j=0; j<col; j++){
            if (numbers[i][j]==x){
            System.out.println(" + "i, j);

                }
            }
        }
    }
}