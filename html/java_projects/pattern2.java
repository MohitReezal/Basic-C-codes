public class pattern2 {
    public static void main(String [] args) {
     int n=4;
     int m=5;
     //Outer loop
     for(int i=1; i<=n;i++){
        //inner loop
        for(int j=1;j<=i;j++){
            System.out.print("*");
        }
        System.out.println();
    }
}
}
