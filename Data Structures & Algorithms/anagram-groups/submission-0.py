class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram_map={}
        for str in strs:
            s="".join(sorted(str))
            if s in anagram_map:
                anagram_map[s].append(str)
            else:
                anagram_map[s]=[str]
        
        ans=[]
        for key in anagram_map:
            ans.append(anagram_map[key])

        return ans
        