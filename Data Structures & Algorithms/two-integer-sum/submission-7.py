class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        complements = {} #complements to index

        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in complements:
                return sorted([complements[complement], i])
            else:
                complements[nums[i]] = i
