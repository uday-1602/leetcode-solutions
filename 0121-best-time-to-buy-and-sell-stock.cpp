class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int ans = 0;
        for(auto &i: prices){
            mini = min(i, mini);
            ans = max(ans, i-mini);
        }
        return ans;
    }
};