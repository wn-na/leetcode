class Solution {
public:
    int longestPalindrome(string s) {
        int alpha[255] = {0,};
        for (char c : s){
            alpha[c]++;
        }
        
        int result = 0, isOdd = 0;
        for(int i = 0; i < 255; i++) {
            if (alpha[i] % 2 == 1) {
               result += alpha[i] - 1;
               isOdd = 1;
            }
        }
        
        for (int i = 0; i < 255; i++) {
            if(alpha[i] % 2 == 0) {
                result += alpha[i];
            }
        }
        return result + isOdd;
    }
};
