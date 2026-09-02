class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> mpp; //char, freq
        for(auto& ch: s1)
            mpp[ch]++;

        int startIdx=0;
        for(int i=0;i<s2.size();i++){
            if(mpp.find(s2[i])==mpp.end()){
                while(startIdx<i+1){
                    if(mpp.find(s2[startIdx]) != mpp.end()){
                        mpp[s2[startIdx]]++;
                    }
                    startIdx++;
                }
                continue;
            }

            mpp[s2[i]]--;
            while(mpp[s2[i]]<0){
                mpp[s2[startIdx]]++;
                startIdx++;
            }

            if(i-startIdx+1 == s1.size())   return true;
        }

        return false;
    }
};
