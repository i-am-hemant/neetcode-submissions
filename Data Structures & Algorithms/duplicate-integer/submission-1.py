class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        seen = set()
        for n in nums:
            # check if n exists in hash_map
            if n in seen: #O(1)
                return True
            else:
                seen.add(n)
        return False

            
        