class Solution:
    def isPalindrome(self, s: str) -> bool:

        def convert(text: str) -> str:
            text = text.lower()
            converted = [ch for ch in text if ch.isalnum()]  # or .isalnum() if you want letters+digits
            return "".join(converted)
        
        # Convert first, so we know the final length
        s = convert(s)
        l, r = 0, len(s) - 1
        
        while l < r:
            if s[l] != s[r]:
                return False
            l += 1
            r -= 1
        
        return True
        