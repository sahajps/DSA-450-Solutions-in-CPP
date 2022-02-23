class Solution{
  public:
    int minJumps(int nm[], int n){
        if(nm[0]==0){
            if(n==1) return 0;
            return -1;
        }
        vector<int> cnt(n,0);
      
        int mini;
        for(int i=1;i<n;i++){
            mini=INT_MAX;
            for(int j=i-1;j>=0;j--){
                if(j+nm[j]>=i)
                    mini=min(mini,cnt[j]+1);
            }
            if(mini==INT_MAX) return -1;
            //cout<<mini<<endl;
            cnt[i]=mini;
        }
        return cnt[n-1];
        
    }
};
