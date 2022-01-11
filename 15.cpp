class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n=a.size(),tmp=n-1,mov,flag=0;
        for(int i=n-2;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if(a[j]>=a[i]){
                    if(a[j]<=a[tmp]){
                        tmp=j;
                        flag=1;
                    }
                }
            }
            if(!flag) continue;
            mov=a[tmp];
            for(int k=tmp;k>i;k--){
                a[k]=a[k-1];
            }
            a[i]=mov;
            return;
        }
        sort(a.begin(),a.end());
    }
};
