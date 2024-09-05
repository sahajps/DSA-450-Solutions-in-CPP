bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    int i=0,j=0;
    while(i<size and j<size){
        if(arr[j]-arr[i]==n and i!=j){
            return true;
        }
        if(arr[j]-arr[i]>n){
            i++;
        }
        else{
            j++;
        }
    }
    return false;
}
