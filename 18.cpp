class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int N=1+1e6;
        int tmp[N];
        int ans=0;
        for(int i=0;i<=N;i++) tmp[i]=0;
        for(int i=0;i<n;i++){
            tmp[arr[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(k-arr[i]>0){
                if(k==2*arr[i]){
                    ans+=tmp[arr[i]]*(tmp[arr[i]]-1)/2;
                    tmp[arr[i]]=0;
                    //<<"1";
                }
                else{
                    ans+=tmp[k-arr[i]]*tmp[arr[i]];
                    tmp[arr[i]]=0;
                    //cout<<"2";
                }
            }
        }
        return ans;
    }
};
