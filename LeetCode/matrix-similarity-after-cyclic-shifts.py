class Solution:
    def areSimilar(self, mat: List[List[int]], k: int) -> bool:
        k %= len(mat[0])
        tmp = []
        for i in mat:
            tmp.append(i[:])
        for _ in range(k):
            for i in range(len(mat)):
                mat[i].insert(0, mat[i][-1])
                mat[i].pop()
        return tmp == mat
        
