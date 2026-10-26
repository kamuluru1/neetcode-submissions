class Solution:
    def findMin(self, nums: list[int]) -> int:
        if nums[0] < nums[-1]:
            return nums[0]
        lo = 0
        hi = len(nums) - 1
        first = nums[0]
        ans = nums[0]

        while lo <= hi:
            mid = lo + (hi - lo) // 2
            if nums[mid] < nums[hi]:
                ans = min(nums[mid], ans)
                hi = mid - 1
            else:
                ans = min(nums[mid], ans)
                lo = mid + 1

        
        return ans