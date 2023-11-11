class Solution:
    def restoreArray(self, adjacentPairs: List[List[int]]) -> List[int]:
        d = {}
        s = set()
        ans = []
        for i in adjacentPairs:
            if i[0] in d:
                d[i[0]].append(i[1])
            else:
                d[i[0]] = [i[1]]
            if i[1] in d:
                d[i[1]].append(i[0])
            else:
                d[i[1]] = [i[0]]
        key = adjacentPairs[0][0]
        s.add(key)
        for i in d[key]:
            s.add(i)
        if len(d[key]) == 2:
            ans = [d[key][0], key, d[key][1]]
        else:
            ans = [d[key][0], key]
        while True:
            l = ans[0]
            r = ans[-1]
            flag = False
            for i in d[l]:
                if i not in s:
                    ans.insert(0, i)
                    s.add(i)
                    flag = True
            for i in d[r]:
                if i not in s:
                    ans.append(i)
                    s.add(i)
                    flag = True
            if not flag:
                break
        return ans
