class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums_s = set(nums)
        res = 0
        for num in nums: 
            curr_s = 1
            while num + 1 in nums_s: 
                curr_s += 1 
                num += 1

            res = max(curr_s, res)
        
        return res