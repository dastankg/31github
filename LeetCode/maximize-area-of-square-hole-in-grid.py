class Solution:
    def maximizeSquareHoleArea(self, n: int, m: int, hBars: List[int], vBars: List[int]) -> int:
        ans = 1
        a = n + 2
        b = m + 2
        hBars.sort()
        vBars.sort()
        q = 1
        q_mx = 0
        w = 1
        w_mx = 0
        for i in range(1, len(hBars)):
            if hBars[i] - hBars[i-1] == 1:
                q += 1
            else:
                q_mx = max(q_mx, q)
                q = 1
        q_mx = max(q, q_mx)
        for i in range(1, len(vBars)):
            if vBars[i] - vBars[i-1] == 1:
                w += 1
            else:
                w_mx = max(w_mx, w)
                w = 1
        w_mx = max(w, w_mx)

        return min(min(a, b) ** 2, (min(w_mx, q_mx) + 1) ** 2)
