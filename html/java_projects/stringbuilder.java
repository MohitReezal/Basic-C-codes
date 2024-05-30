import java.util.*;

import javax.swing.border.EtchedBorder;
public class stringbuilder {
    public static void main(String args[]) {
        StringBuilder sb= new StringBuilder("Mohit");
        //Char at index 0
        System.out.println(sb.charAt(0));
        //Set char at index 0
        //sb.setCharAt(0,'R');
        //System.out.println(sb);
        //Mohit-->RMohit
        sb.insert(0, 'R');
        System.out.println(sb);
        //Delete the character
        sb.delete(3, 5);
        System.out.println(sb);

        
    }
}
