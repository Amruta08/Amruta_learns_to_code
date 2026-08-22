
import java.util.*;
  
public class IO {
    public static void main(String[] argv)
        throws Exception
    {
  
        String s = "AMRUTA";
  
        // create a new scanner
// with the specified String Object
        Scanner scanner = new Scanner(s);
  
        // print the line
        System.out.println("" + scanner.nextLine());
  
        // check if there is an IO exception
        System.out.println("" + scanner.ioException());
  
        // close the scanner
        scanner.close();
    }
}
    

