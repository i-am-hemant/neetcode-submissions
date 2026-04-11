class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        for i in range(0,len(nums)):
            if i==0:
                continue
            if nums[i]==nums[i-1]:
                return True
        return False
            
            
        