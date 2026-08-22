

public class twod {
    public static void main(String[] args) {
        int [][][] texr = {
            {
                {1,-2,3} ,
                {2,4,3}
            },
            {
                {-4,-5,6,9} ,
                {1} ,
                {2,3}
            }
        } ;

        for (int[][] a2 : texr) {
            for (int[] a1 : a2 ) {
                for (int var : a1) {
                    System.out.println(var);  
                } 
            } 
        }
    }
}
