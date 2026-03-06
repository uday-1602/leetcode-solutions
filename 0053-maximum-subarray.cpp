class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int result = nums[0];
        for(int i=1; i<nums.size(); i++){
            result = max(result + nums[i], nums[i]);
            ans = max(ans, result);
        }
        return ans;
    }
};