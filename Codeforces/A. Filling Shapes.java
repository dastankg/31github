import java.util.*;
public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextInt();
        if ((n * 3) % 6 != 0){
            System.out.println(0);
        } else {
            System.out.println((long) Math.pow(2, (n * 3) / 6));
        }
    }
}
