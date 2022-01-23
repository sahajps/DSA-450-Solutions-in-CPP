class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
        if(n==1) return a[0];
        sort(a,a+n);
        int count=1;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                count++;
            }
            else{
                count=1;
            }
            if(count>n/2){
                return a[i];
            }
        }
        return -1;
    }
};
