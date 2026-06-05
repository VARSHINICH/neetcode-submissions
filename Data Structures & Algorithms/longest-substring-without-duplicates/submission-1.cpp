class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        unordered_set<int> sett;
        int maxL =0;
        for(int r=0;r<s.length();r++){
            while(sett.find(s[r])!=sett.end()){
                sett.erase(s[l]);
                l++;
            }
            maxL = max(maxL, r-l+1);
            sett.insert(s[r]);
        }
        return maxL;
    }
};
