string isSubset(int a1[], int a2[], int n, int m) {
    vector<int> tmp(1e5+1,0);
    for(int i=0;i<n;i++){
        tmp[a1[i]]=1;
    }
    for(int i=0;i<m;i++){
        if(tmp[a2[i]]==0){
            return "No";
        }
    }
    return "Yes";
}
