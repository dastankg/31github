

class Solution {
    public int findMinimumOperations(String s1, String s2, String s3) {
        int ans = 0;
        int a = s1.length();
        int b = s2.length();
        int c = s3.length();
        for (int i = 0; i < Math.min(a, Math.min(b, c)); i++) {
            if (s1.charAt(i) == s2.charAt(i) && s1.charAt(i) == s3.charAt(i)) {
                ans++;
            } else {
                break;
            }
        }
        if (ans == 0) {
            return -1;
        }
        return (a + b + c) - (3 * ans);
    }
}
