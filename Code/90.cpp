vector<int> find(int arr[], int n , int x )
{
    int a1=-1;
    int a2=-1;
    
    int i=0,j=n-1;
    while(i<=j){
        int mid=(i+j)/2;
        
        if(x==arr[mid] && (mid==0 || x>arr[mid-1])){
            a1=mid;
            break;
        }
        else if(x>arr[mid]){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    
    i=0;j=n-1;
    while(i<=j){
        int mid=(i+j)/2;
        
        if(x==arr[mid] && (mid==n-1 || x<arr[mid+1])){
            a2=mid;
            break;
        }
        else if(x<arr[mid]){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return {a1,a2};
}
