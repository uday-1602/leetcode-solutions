class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0, c2 = 0;
        int n1 = nums[0], n2 = nums[0];
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(n1 == nums[i]){
                c1++;
            }
            else if(n2 == nums[i]){
                c2++;
            }
            else if(c1 == 0){
                n1 = nums[i];
                c1++;
            }
            else if(c2 == 0){
                n2 = nums[i];
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1 = 0, c2 = 0;
        if(n1 == n2) return {n1};
        for(auto &i: nums){
            if(i == n1) c1++;
            if(i == n2) c2++;
        }
        if(c1 > n/3) ans.push_back(n1);
        if(c2 > n/3) ans.push_back(n2);
        return ans;
    }
};