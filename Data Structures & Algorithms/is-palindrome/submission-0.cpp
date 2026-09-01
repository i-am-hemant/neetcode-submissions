class Solution {
public:
    unordered_set<char> getAllNonAlphanumeric(const string& str){
        unordered_set<char> ls;
        for(char c: str){
            if(!isalnum(c)){
                ls.insert(c);
            }
        }
        return ls;
    }

    void removeNonAlphanumerics(string& str){
        unordered_set<char> nonalnums = getAllNonAlphanumeric(str);
        for(auto& c: nonalnums){
            str.erase(remove(str.begin(), str.end(), c), str.end());
        }
    }
    bool isPalindrome(string s) {
        removeNonAlphanumerics(s);
        for(auto& ch:s)
            ch=tolower(ch);
        int l=0, r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r])  return false;
            l++;
            r--;
        }
        return true;
    }
};
