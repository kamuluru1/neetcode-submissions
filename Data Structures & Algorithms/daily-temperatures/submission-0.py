class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        res = [0] * len(temperatures) # [0, 0, 0, 0, 0, 0, 0]
        s = [] # [{30, 0}]

        for i in range(len(temperatures)):
            if not s:
                s.append([temperatures[i], i])
            else:
                if temperatures[i] <= s[-1][0]:
                    s.append([temperatures[i], i])
                else:
                    while s and temperatures[i] > s[-1][0]:
                        res[s[-1][1]] = i - s[-1][1]
                        s.pop()
                    s.append([temperatures[i], i])
                    
        return res



                        



            



