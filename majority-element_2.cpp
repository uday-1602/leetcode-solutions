class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int i = 0;
        int ans = nums[i];
        int n = nums.size();
        for(i=0; i<nums.size(); i++){
            if(nums[i] == ans){
                count++;
            }
            else{
                if(count == 0){
                    ans = nums[i];
                    count++;
                }
                else{
                    count--;
                }
            }
        }
        return ans;
    }
};