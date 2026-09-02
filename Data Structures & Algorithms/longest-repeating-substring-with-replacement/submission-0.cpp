class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int startIdx=0; // start idx of current substring at any time
        int maxSubLen=0;
        for(int i=0;i<s.size();i++){
            freq[s[i]-'A']++;
            int cntDifferentChars = (i-startIdx+1)-*max_element(freq.begin(), freq.end());
            if(cntDifferentChars<=k){
                maxSubLen = max(maxSubLen, i-startIdx+1);
                continue;
            }else{
                while(cntDifferentChars>k){
                    freq[s[startIdx]-'A']--;
                    startIdx++;
                    cntDifferentChars = (i-startIdx+1)-*max_element(freq.begin(), freq.end());
                }
                maxSubLen = max(maxSubLen, i-startIdx+1);
            }
        }
        return maxSubLen;
    }
};
