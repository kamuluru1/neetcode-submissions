class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        def can_finish(k, h):
            for pile in piles:
                h -= math.ceil(pile / k)
            if h < 0:
                return False
            return True

        if h == len(piles):
            return max(piles)
        
        k = 1
        lo = 1
        hi = max(piles)

        while lo <= hi:
            mid = lo + (hi - lo) // 2
            if can_finish(mid, h) == True:
                k = mid
                hi = mid - 1
            else:
                lo = mid + 1
        
        return k