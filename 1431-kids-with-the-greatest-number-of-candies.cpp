class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        vector<bool> ans;
        for(int i: candies){
            if(i>max){
                max = i;
            }
        }
        for(int i: candies){
            if(i+extraCandies >= max){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
    }
};