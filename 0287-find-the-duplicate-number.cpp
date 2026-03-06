class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size();
        int low = 1;
        int high = len-1;
        
        while(low < high){
            int mid = low + (high-low)/2;
            int count = 0;
            for(int i=0; i<len; i++){
                if(nums[i] <= mid){
                    count++;
                }
            }

            if(count <= mid){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        return low;
    }
};