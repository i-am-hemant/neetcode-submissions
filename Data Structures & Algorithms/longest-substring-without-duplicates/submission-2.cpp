class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp; //{char, lastSeenIdx}
        int maxLen=0, startIdx=0;
        for(int i=0;i<s.size();i++){
            if(mpp.find(s[i])==mpp.end())
                mpp[s[i]]=i;
            else{
                maxLen=max(maxLen, i-startIdx);
                if(mpp[s[i]]>=startIdx) //imp -- the starting idx of longest substring will move only move forward, not backward. remember example "abba"
                    startIdx=mpp[s[i]]+1;
                mpp[s[i]]=i;
            }
        }
        maxLen=max<int>(maxLen, s.size()-startIdx);
        return maxLen;
    }
};
