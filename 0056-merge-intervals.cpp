class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> output;
        int r = intervals.size();

        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){
            return a[0] < b[0];
        });

        vector<int> prev = intervals[0];

        for(int i=1; i<r; i++){
            if(prev[1] >= intervals[i][0]){
                prev[1] = max(intervals[i][1], prev[1]);
            }
            else{
                output.push_back(prev);
                prev = intervals[i];
            }
        }

        output.push_back(prev);
        return output;
    }
};