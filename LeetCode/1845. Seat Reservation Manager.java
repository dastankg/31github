class SeatManager {
    PriorityQueue<Integer> priorityQueue;

    public SeatManager(int n) {
        priorityQueue = new PriorityQueue<>();
        for (int i = 1; i <= n; i++) {
            this.priorityQueue.add(i);
        }
    }

    public int reserve() {
        return this.priorityQueue.poll();
    }

    public void unreserve(int seatNumber) {
        this.priorityQueue.add(seatNumber);
    }
}
