import java.util.Scanner;
public class cal {
    public static void main(String[] args){
        Scanner input =  new Scanner(System.in);
        System.out.print("enter a number");
        int n = input.nextInt();
        int num1 = input.nextInt();
        int num2 = input.nextInt();
        
        switch(n)
        {
        case 1:
           System.out.println("addition is " + (num1+num2));
           break;
        case 2 :
           System.out.println("subtraction is " + (num1-num2));
           break;
        case 3:
           System.out.println("multiplication  is" + (num1*num2));
           break;
        case 4:
           System.out.println("division  is" + (num1/num2));
           break;
        default:
           System.out.println("enter valid choice");
        }
        input.close();
          
}
    
}
