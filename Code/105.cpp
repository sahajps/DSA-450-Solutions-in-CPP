class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        long long prod=1;
        int nozero=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nozero++;
                continue;
            }
            prod*=nums[i];
        }
        long long prod_onezero=prod;
        if(nozero){
            prod=0;
        }
        vector<long long int> ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
                ans[i]=prod/nums[i];
            else if(nozero>1){
                ans[i]=0;
            }
            else{
                ans[i]=prod_onezero;
            }
        }
        return ans;
    }
};
