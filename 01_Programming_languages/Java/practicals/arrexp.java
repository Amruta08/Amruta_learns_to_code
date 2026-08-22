package practicals;
import java.util.*;

public class arrexp {
    public static void main(String args[])
        throws ArrayIndexOutOfBoundsException
    {
 
        // Taking input from user
        Scanner s = new Scanner(System.in);
 
        // Storing user input elements in an array
        int arr[] = new int[5];
 
        // Try block to check exception
        try {
            // Forcefully iteration loop no of times
            // these no of times > array size
            for (int i = 0; i < 6; i++) {
 
                // Storing elements through nextInt()
                arr[i] = s.nextInt();
            }
        }
        catch (ArrayIndexOutOfBoundsException e) {
            // Print message when any exception occurs
            System.out.println(
                "Array Bounds Exceeded...\nTry Again");
        }
    }
    
}


 

    

