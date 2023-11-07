class Solution {
    public int[] xorQueries(int[] arr, int[][] queries) {
        List<Integer> lst = new ArrayList<>();
        lst.add(0);
        int l = 0;
        for (int i: arr){
            lst.add(i ^ lst.get(l));
            l++;
        }
        int[] ans = new int[queries.length];
        l = 0;
        for (int[] i: queries){
            ans[l] = lst.get(i[0]) ^ lst.get(i[1]+1);
            l++;
        }
        return ans;
    }
}
