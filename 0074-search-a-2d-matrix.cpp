class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int row = 0;
       int col = matrix[0].size()-1;
       while(row<matrix.size() && col>=0){
            int element = matrix[row][col];
            if(element == target){
                return true;
            }
            else if(element>target){
                int i=0, j=col;
                while(i<j){
                    int mid = i + (j-i)/2;
                    if(matrix[row][mid] == target){
                        return true;
                    }
                    else if(matrix[row][mid]>target){
                        j = mid;
                    }
                    else{
                        i = mid+1;
                    }
                }
                return false;
            }
            else{
                row++;
            }
       }
       return false;
    }
};