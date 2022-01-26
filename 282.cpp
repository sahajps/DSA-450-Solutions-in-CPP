class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int count=0,ans;
        for(int i=0;i<n;i++){
            int bflag=0;
            for(int j=0;j<n;j++){
                if(M[i][j]==1){
                    bflag=1;
                    break;
                }
            }
            if(!bflag){
                count++;
                ans=i;
            }
        }
        
        if(count==1) return ans;
        return -1;
    }
};
