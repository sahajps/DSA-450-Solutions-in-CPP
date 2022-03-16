class Solution{   
public:
    int median(vector<vector<int>> mat, int r, int c){
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<r;i++){
            mini=min(mini,mat[i][0]);
            maxi=max(maxi,mat[i][c-1]);
        }
        
        int midn=mini;
        int midnPos=(r*c+1)/2;
        
        while(mini<maxi){
            int mid=(mini+maxi)/2;
            int count=0;
            for(int i=0;i<r;i++){
                count+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
            }
            
            if(count<midnPos){
                mini=mid+1;
                midn=mini;
            }
            else{
                maxi=mid;
            }
        }
        return midn;
    }
};
