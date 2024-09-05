// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
int search(int arr[], int n, int x, int k)
{
    int i=0;
    while(i<n){
        if(arr[i]==x) return i;
        
        i+=max(1,abs(arr[i]-x)/k);
    }
    return -1;
}    	
