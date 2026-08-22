package practicals;

public class fac {
    public static void main(String[] args) {
        int sum = 1;
        int factno = 5;
        for (int i = 1; i <= factno; i++) {
            sum = sum * i;
        }
        System.out.println("factorial of " + factno + " is : " + sum);
    }

}
