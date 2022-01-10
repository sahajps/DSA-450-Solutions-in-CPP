class Solution{
  public:
    int minJumps(int a[], int n){
        vector<int> ans(n,INT_MAX);
        ans[0]=0;
        for(int i=0;i<n;i++){
            if(ans[i]==INT_MAX){
                return -1;
            }
            if(a[i]==0){
                continue;
            }
            for(int j=i+1;j<=a[i]+i and j<n;j++){
                ans[j]=min(ans[j],ans[i]+1);
            }
        }
        //for(auto i:ans){
          //  cout<<i<<" ";
        //}
        return ans[n-1];
    }
};
