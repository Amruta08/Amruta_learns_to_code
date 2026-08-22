package DSA.Analysis;

public class analyze{
    // Method 1
    // Does work in constant time
    int Sum1(int n) {
        int sum = ((n * (n + 1)) / 2);
        return sum;
    }

    // Method 2
    // Does work in n time
    int Sum2(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum = sum + i;
        }
        return sum;
    }

    // Method 3
    // Does work in n^2 time
    int Sum3(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                sum++;
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        analyze sum = new analyze();
        System.out.println(sum.Sum1(10));
        System.out.println(sum.Sum2(10));
        System.out.println(sum.Sum3(10));
    }
}
