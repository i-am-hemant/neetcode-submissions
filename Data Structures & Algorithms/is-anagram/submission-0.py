class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # sort both strings, if they match, they are anagram
        s=sorted(s)
        t=sorted(t)

        if s==t:
            return True
        return False
        