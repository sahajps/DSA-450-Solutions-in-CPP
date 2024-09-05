class Solution{
    public:
    static int setbit(int n){
        int count=0;
        while(n){
            count+= n & 1;
            n=n>>1;
        }
        return count;
    }
    
    static bool cmp(int const & a,int const & b){
        return setbit(a)>setbit(b);
    }
    
    void sortBySetBitCount(int arr[], int n)
    {
        stable_sort(arr,arr+n,cmp);
    }
};
