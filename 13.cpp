class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        vector<long long> kad(n,0);
        if(arr[0]>0)kad[0]=arr[0];
        else kad[0]=0;
        long long maxi=kad[0];
        for(int i=1;i<n;i++){
            if(kad[i-1]+arr[i]>0){
                kad[i]=kad[i-1]+arr[i];
                maxi=max(maxi,kad[i]);
            }
        }
        if(maxi==0){
            int maxii=INT_MIN;
            for(int i=0;i<n;i++){
                maxii=max(maxii,arr[i]);
            }
            return maxii;
        }
        //maxi=maxii;
       return maxi; 
    }
};
