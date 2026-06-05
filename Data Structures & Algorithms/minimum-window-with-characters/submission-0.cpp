class Solution {
public:
    string minWindow(string s, string t) {

        int minLen = INT_MAX;
        int startIndex = -1;

        for(int i = 0; i < s.size(); i++) {

            unordered_map<char,int> mpp;

            for(char c : t)
                mpp[c]++;

            int cnt = 0;

            for(int k = i; k < s.size(); k++) {

                if(mpp[s[k]] > 0)
                    cnt++;

                mpp[s[k]]--;

                if(cnt == t.size()) {

                    if(k - i + 1 < minLen) {
                        minLen = k - i + 1;
                        startIndex = i;
                    }

                    break;
                }
            }
        }

        return startIndex == -1
                ? ""
                : s.substr(startIndex, minLen);
    }
};