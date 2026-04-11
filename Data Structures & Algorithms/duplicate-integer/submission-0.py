class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        for i in range(0,len(nums)):
            if i==0:
                continue
            if nums[i]==nums[i-1]:
                return True
        return False

"""
Analysis & LearningLogic: 
Sorting se duplicate elements hamesha adjacent (padosi) ho jate hain, isliye simple linear scan kaam kar jata hai.
Python Tip: nums.sort() original list ko in-place modify karta hai (Space: $O(1)$ theoretically, but Timsort implementation mein hidden space ho sakta hai). sorted(nums) ek nayi list return karta hai (Space: $O(n)$).
Edge Case: Tumhara if i == 0: continue wala logic safe hai, par tum range(1, len(nums)) bhi use kar sakte the to skip the first index directly.

"""
        
