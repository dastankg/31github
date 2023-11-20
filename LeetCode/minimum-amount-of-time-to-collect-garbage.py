class Solution:
    def distributeCandies(self, n: int, limit: int) -> int:
        s = set()
        for i in range(0, n+1):
            for j in range(0, n+1):
                for k in range(0, n+1):
                    if i <= limit and j <= limit and k <= limit and i + j + k == n:
                        s.add((i, j, k))
        return len(s)
