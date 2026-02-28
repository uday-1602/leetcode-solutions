class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int l=0, r=height.size()-1;
        int lmax = height[l];
        int rmax = height[r];
        while(l<r){
            int mini = min(lmax, rmax);
            if(mini == rmax){
                r--;
                rmax = max(rmax, height[r]);
                ans += rmax - height[r];
            }
            else{
                l++;
                lmax = max(lmax, height[l]);
                ans += lmax - height[l];
            }
        }
        return ans;
    }
};