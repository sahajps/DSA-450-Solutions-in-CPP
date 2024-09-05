class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int rs=0,cs=c-1;
        while(rs<r and cs>-1){
            if(matrix[rs][cs]==target){
                return true;
            }
            if(matrix[rs][cs]<target){
                rs++;
            }
            else{
                cs--;
            }
        }
        return false;
    }
};
