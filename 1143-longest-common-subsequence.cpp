class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size(), n = text2.size();
        return lcs(text1, text2, m, n);
    }
    int lcs(string text1, string text2, int m, int n){
        if(m==0 || n==0) return 0;

        if(text1[m-1] == text2[n-1]){
            return 1 + lcs(text1, text2, m-1, n-1);
        }
        else{
            return max(lcs(text1, text2, m, n-1), lcs(text1, text2, m-1, n));
        }
    }
};