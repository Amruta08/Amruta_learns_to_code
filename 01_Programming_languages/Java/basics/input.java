import java.util.Scanner;
public class input {
    public static void main(String[] args){
        // create  an object of scanner using new keyword
        Scanner input =  new Scanner(System.in);

        System.out.println("enter a number");

        // method of scanner class to get integer
        int no = input.nextInt();
        
        if (no == 1) {
            System.out.println(" you have entered 1") ;
            
        } else if (no == 2) {
            System.out.println(" you have entered 2") ;
            
        } else {
            System.out.println(" you have entered a random number") ; 
        }
        
        input.close();
        }
    
    
}

