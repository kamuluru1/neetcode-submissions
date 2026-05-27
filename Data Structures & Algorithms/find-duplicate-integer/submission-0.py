class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        dups = set()
        for num in nums:
            if num in dups:
                return num
            dups.add(num)