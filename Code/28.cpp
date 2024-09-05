class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
    int sum2,i,j;
    sort(A,A+n);
    for(int k=0;k<n;k++){
        sum2=X-A[k];
        i=k+1;j=n-1;
        while(i<j){
            if(A[i]+A[j]==sum2){
                return 1;
            }
            else if(A[i]+A[j]>sum2){
                j--;
            }
            else{
                i++;
            }
        }
    }
    return 0;
    }

};
