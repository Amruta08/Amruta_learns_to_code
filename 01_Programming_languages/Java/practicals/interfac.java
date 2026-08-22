package practicals;
import java.util.*;

public class interfac {
  public static void main(String[] args){
    // add b = new add() ;
    // b.array();

    transpose c = new transpose();
    c.array();

    product d = new product();
    d.array();

  }
}

interface arraymethods {
  public void array();
  //void god();
}

class add implements arraymethods{
  public void array() {

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


class transpose implements arraymethods{
  public void array() {

    int n,m;
        Scanner ar = new Scanner(System.in);

        System.out.println("Enter n,m values\n");
        n = ar.nextInt();
        m = ar.nextInt();

        int a[][] = new int[n][m];

        System.out.println("Enter array elements:-");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
               System.out.println("Enter a no."); 
               a[i][j] = ar.nextInt();
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
               System.out.println(a[j][i]+ " ");
            }
            System.out.println(" ");
        }
    }

}

class product implements arraymethods{
  public void array() {

    int n,m,p;
    int i,j,k;
        Scanner ar = new Scanner(System.in);

        System.out.println("Enter m,n,p values\n");
        m = ar.nextInt();
        n = ar.nextInt();
        p = ar.nextInt();

        int a[][] = new int[m][n];
        int b[][] = new int[n][p];
        int c[][] = new int[m][p];

        System.out.println("Enter array 1 :-");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
               System.out.println("Enter a no."); 
               a[i][j] = ar.nextInt();
            }
        }

        System.out.println("Enter array 2 :-");
        for (i = 0; i < n; i++) {
            for (j = 0; j < p; j++) {
               System.out.println("Enter a no."); 
               b[i][j] = ar.nextInt();
            }
        }

        for (i = 0; i < m; i++){
            for (j = 0; j < p; j++){
              c[i][j] = 0;
              for (k = 0; k < n; k++){
                c[i][j] += a[i][k]*b[k][j] ;
               }
            }
        }
        System.out.println("Product MATRIX");
        for (i = 0; i < m; i++) {
            for (j = 0; j < p; j++) {
               System.out.print(c[i][j]+"\t"); 
            }
            System.out.println(); 
        }
  
    }

}

