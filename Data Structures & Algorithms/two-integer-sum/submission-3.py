class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        complements = {} #value -> index

        for i in range(len(nums)):
            diff = target - nums[i]
            if diff in complements:
                return sorted([complements[diff], i])
            complements[nums[i]] = i





