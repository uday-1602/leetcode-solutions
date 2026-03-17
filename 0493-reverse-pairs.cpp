class Solution {
private:
    int merge(vector<int>& nums, int low, int mid, int high){
        int count = 0;
        int j = mid + 1;
        for(int i=low; i<=mid; i++){
            while(j<=high && nums[i] > 2*(long long)nums[j]){
                j++;
            }
            count += j - (mid+1);
        }

        int size = high - low + 1;
        vector<int> temp(size, 0);
        int left = low, right = mid + 1, k=0;

        while(left<=mid && right<=high){
            if(nums[left] < nums[right]){
                temp[k++] = nums[left++];
            }
            else{
                temp[k++] = nums[right++];
            }
        }
        while(left<=mid){
            temp[k++] = nums[left++];
        }
        while(right<=high){
            temp[k++] = nums[right++];
        }
        k = 0;
        for(int i = low; i<=high; i++){
            nums[i] = temp[k++];
        }
        return count;
    }
    int mergeSort(vector<int>& nums, int low, int high){
        if(low>=high){
            return 0;
        }
        int mid = low + (high-low)/2;
        int count = 0;
        count += mergeSort(nums, low, mid);
        count += mergeSort(nums, mid+1, high);
        count += merge(nums, low, mid, high);
        return count;
    }
public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);
    }
};