class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        vector<int> c(1e5+1,0);
        for(int i=0;i<n;i++){
            c[a[i]]++;
        }
        for(int i=0;i<m;i++){
            c[b[i]]++;
        }
        int k=0,u=0;
        while(k<1e5+1 and u<n+m){
            if(c[k]!=0){
                u++;
            }
            k++;
        }
        return u;
        
    }
};
