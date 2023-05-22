class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        sr, tr = [], []
        for i in s:
            if i == '#':
                if len(sr) > 0:
                    sr.pop()
            else:
                sr.append(i)
                
        for i in t:
            if i == '#':
                if len(tr) > 0:
                    tr.pop()
            else:
                tr.append(i)
        return sr == tr
                
