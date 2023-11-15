class Solution {
    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        HashSet<Integer> hashSet = new HashSet<>();
        hashSet.add(0);
        List<Integer> arr = new ArrayList<>(rooms.get(0));
        while (!arr.isEmpty()){
            int key = arr.get(arr.size()-1);
            arr.remove(arr.size()-1);
            if (!hashSet.contains(key)){
                hashSet.add(key);
                for (int i: rooms.get(key)){
                    if (!hashSet.contains(i)){
                        arr.add(i);
                    }
                }
            }
        }
        return hashSet.size() == rooms.size();
    }
}
