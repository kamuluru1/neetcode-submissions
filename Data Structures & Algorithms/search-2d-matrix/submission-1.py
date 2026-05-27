class Solution:
    def binary_search(self, nums: List[int], target: int) -> bool:
        l, r = 0, len(nums) - 1

        while l <= r:
            mid = (l + r) // 2
            if nums[mid] == target:
                return True
            elif nums[mid] < target:
                l = mid + 1
            else:
                r = mid - 1
        return False

    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m, n = len(matrix), len(matrix[0])
        t, b = 0, m - 1

        while t <= b:
            mid = (t+b)//2
            if matrix[mid][-1] == target or self.binary_search(matrix[mid], target) == True:
                return True
            elif matrix[mid][-1] < target:
                t = mid + 1
            else:
                b = mid - 1
        return False
        