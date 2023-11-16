import java.util.*;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<List<Integer>> arr = new ArrayList<>();
        List<Integer> tmp = new ArrayList<>();
        for (int i = 0; i <= n; i++) {
            func(arr, tmp, i);
        }
        for (int i = n - 1; i >= 0; i--) {
            func(arr, tmp, i);
        }
        int c = n * 2 + 1;
        for (List<Integer> i : arr) {
            for (int j = 0; j < c - i.size(); j++) {
                System.out.print(" ");
            }
            for (int j = 0; j < i.size(); j++) {
                if (j + 1 != i.size()){
                    System.out.print(i.get(j) + " ");
                } else {
                    System.out.println(i.get(j));
                }
            }

        }
    }

    private static void func(List<List<Integer>> arr, List<Integer> tmp, int i) {
        for (int j = 0; j <= i; j++) {
            tmp.add(j);
        }
        for (int j = i - 1; j >= 0; j--) {
            tmp.add(j);
        }
        arr.add(new ArrayList<>(tmp));
        tmp.clear();
    }
}
