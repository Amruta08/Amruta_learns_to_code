package practicals;
import java.lang.Math;
import java.util.Scanner;

public class sqr {
    public static void main(String args[])
    {
        Scanner input =  new Scanner(System.in);
        System.out.println("enter a number");
        int no = input.nextInt();
  
        System.out.println("Square root is = " + Math.sqrt(no));
        input.close();
        
    }

}

  

    