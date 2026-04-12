class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen_at_idx={}
        for i in range(0, len(nums)):
            # see if target-n already exists in set
            if target-nums[i] in seen_at_idx:
                return [min(i, seen_at_idx[target-nums[i]]), max(i, seen_at_idx[target-nums[i]])]
            else:
                seen_at_idx[nums[i]]=i
        return [-1]
        