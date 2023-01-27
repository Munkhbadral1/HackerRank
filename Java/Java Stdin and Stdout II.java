import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int i = scan.nextInt();
        double d = scan.nextDouble();
        //line 10, 11 do w/ ChatGPT. String deer scan.nextLine(); ym baina.
        scan.nextLine(); // consume the newline character after the double
        String s = scan.nextLine();
        
        
        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }
}

