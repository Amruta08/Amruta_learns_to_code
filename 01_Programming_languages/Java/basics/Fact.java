import java.util.*;
public class Fact 
{
  public static void main(String args[]){
   int no , fact = 1;
   Scanner input =  new Scanner(System.in);
   no =  input.nextInt();

   for (int i = 1; i <= no; i++) {
            fact = fact * i;
        }
   System.out.println("Factorial of " + no + " = " + fact);

   input.close();
   }
  
}
