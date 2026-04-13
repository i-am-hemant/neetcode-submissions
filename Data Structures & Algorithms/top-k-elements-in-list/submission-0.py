class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hash_map={}
        for n in nums:
            if n in hash_map:
                hash_map[n]+=1
            else:
                hash_map[n]=1

        sorted_hash=sorted(hash_map.items(), key=lambda x:x[1], reverse=True)
        final_list=[items[0] for items in sorted_hash]
        return final_list[:k]
        