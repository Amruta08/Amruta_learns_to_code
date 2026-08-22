import java.util.*;
public class addarray {

    public static void main(String[] args) {
        int n,m;
        Scanner ar = new Scanner(System.in);

        System.out.println("Enter n,m values\n");
        n = ar.nextInt();
        m = ar.nextInt();

        int a[][] = new int[n][m];
        int b[][] = new int[n][m];
        int c[][] = new int[n][m];

        System.out.println("Enter array 1 :-");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
               System.out.println("Enter a no."); 
               a[i][j] = ar.nextInt();
            }
        }

        System.out.println("Enter array 2 :-");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
               System.out.println("Enter a no."); 
               b[i][j] = ar.nextInt();
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
               c[i][j] = a[i][j] + b[i][j] ;
            }
        }
        System.out.println("SUM MATRIX");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
               System.out.println(c[i][j]+"\t"); 
            }
            System.out.println(); 
        }

        
    }
    
}
