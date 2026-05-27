class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        l, r = 0, len(s) - 1

        if len(s) <= 1:
            return True

        while l < r:
            if s[l] == s[r]:
                l += 1
                r -= 1
            elif s[l].isalnum() == False:
                l += 1
            elif s[r].isalnum() == False:
                r -= 1
            else:
                return False
        return True
        
