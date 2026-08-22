import java.util.*;
import java.lang.*;
public class array {
    
	public static void main(String args[])
		throws ArrayIndexOutOfBoundsException
	{

		
		Scanner s = new Scanner(System.in);

		
		int arr[] = new int[5];

	
		try {
			
			for (int i = 0; i < 6; i++) {

				
				arr[i] = s.nextInt();
			}
		}
		catch (ArrayIndexOutOfBoundsException e) {
			
			System.out.println(
				"Array Bounds Exceeded...\nTry Again");
		}
	}
}

    

