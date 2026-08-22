package practicals;

import java.util.Scanner;

class MyException extends Exception {
    public MyException(String s) {
        super(s);
    }
}

public class exp {
    public static void main(String args[]) throws MyException {
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter a temperature between 0-40");
        int i = sc.nextInt();

        if (i > 40) {
            throw new MyException("user defined exception has been thrown");
        }
        else {

            if (i<=20) {
                System.out.println("Low temperature");
            } else {
                System.out.println("Normal temperature");
                
            }

    }

    }
}


