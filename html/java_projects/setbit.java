public class setbit {
    public static void main(String args[]){
        int n=5;
        int pos= 1;
        int bitmask= 1<<pos;
        int newnum= bitmask | n;
        System.out.println(newnum);
    }
}
