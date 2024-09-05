class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    sort(arr,arr+n);
        long long ans=0;
        long long find;
        for(int i=0;i<n;i++){
            find=sum-arr[i];
                
            int t1=i+1,t2=n-1;
            while(t2>t1){
                if(arr[t1]+arr[t2]<find){
                    ans+=t2-t1;
                    t1++;
                    //t2=n-1;
                }   
                else t2--;
            }
        }
        return ans;
	}
		 

};
