class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        int n=r-l+1;
        vector<int> c(1e5+1,0);
        for(int i=0;i<n;i++){
            c[arr[i]]++;
        }
        int K=0;
        for(int i=0;i<1e5+1;i++){
            if(c[i]!=0){
                K++;
                if(k==K){
                    return i;
                }
            }
            
        }
    }
};
