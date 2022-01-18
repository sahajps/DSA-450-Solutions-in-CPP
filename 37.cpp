class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
        int rs=0,re=r-1,cs=0,ce=c-1;
        while(rs<re and cs<ce){
            for(int i=cs;i<=ce;i++){
                ans.push_back(matrix[rs][i]);
            }
            rs++;
            for(int i=rs;i<=re;i++){
                ans.push_back(matrix[i][ce]);
            }
            ce--;
            for(int i=ce;i>=cs;i--){
                ans.push_back(matrix[re][i]);
            }
            re--;
            for(int i=re;i>=rs;i--){
                ans.push_back(matrix[i][cs]);
            }
            cs++;
        }
        if(rs==re){
            for(int i=cs;i<=ce;i++){
                ans.push_back(matrix[rs][i]);
            }
        }
        else if(cs==ce){
            for(int i=rs;i<=re;i++){
                ans.push_back(matrix[i][cs]);
            }
        }
        return ans;
    }
};
