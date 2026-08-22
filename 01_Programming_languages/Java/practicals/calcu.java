package practicals;
import java.util.Scanner;
import practicals.one;

public class calcu {

    public static void main(String[] args) {
        // new one();
        // new two();

        Scanner input =  new Scanner(System.in);
        System.out.println("enter a number");

        System.out.println("1 +");
        System.out.println("2 -");
        System.out.println("3 x");
        System.out.println("4 /");
        System.out.println("5 root");
        System.out.println("6 power");

        int n = input.nextInt();
        int num1 = input.nextInt();
        int num2 = input.nextInt();
        
        switch(n)
        {
        case 1:
           one.add(num1,num2);
           break;
        case 2 :
           one.sub(num1, num2);
           break;
        case 3:
           one.mul(num1, num2);
           break;
        case 4:
           one.div(num1, num2);
           break;
        case 5:
           two.root(num1, num2);
           break;
        case 6:
           two.power(num1, num2);
           break;
        default:
           System.out.println("enter valid choice");
        }
        input.close();
          
    }  
    
}
