class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sFlag[255] = {0,};
        int tFlag[255] = {0,};
        for (int i = 0; i < s.size(); i++) {
            int ch = s[i];
            if (tFlag[t[i]] == 0) {
                if(sFlag[ch] == 0){
                    sFlag[ch] = t[i];
                    tFlag[t[i]] = 1;
                } else {
                    return false;
                }
            } else {
                if(sFlag[ch] != t[i]) return false;
            }
        }
        return true;
    }
};
