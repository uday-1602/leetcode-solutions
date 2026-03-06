class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int s = n*n;
        vector<int> v(s+1);
        for(auto i: grid){
            for(auto j: i){
                v[j]++;
            }
        }
        int repeat = -1;
        int missing = -1;
        for(int i=1; i<=s; i++){
            if(v[i] == 0){
                missing = i;
            }
            if(v[i] == 2){
                repeat = i;
            }
        }
        return {repeat, missing};
    }
};