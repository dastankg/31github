import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t;
        long a, b, n, S;
        t = sc.nextInt();
        for (int i = 0; i < t; i++) {

            a = sc.nextInt();
            b = sc.nextInt();
            n = sc.nextInt();
            S = sc.nextInt();
            if (S % n == 0 && a * n >= S) {
                System.out.println("YES");
            } else if (S % n == 0 && a * n + b >= S) {
                System.out.println("YES");
            } else if (S % n <= b && a * n + b >= S) {
                System.out.println("YES");
            } else if (S <= b) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

    }
}
