class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n=a.size(),tmp,mov,flag=0,maxi;
        for(int i=n-2;i>=0;i--){
            maxi=INT_MAX;
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]){
                    if(a[j]<maxi){
                        tmp=j;
                        maxi=a[j];
                        flag=1;
                    }
                }
            }
            if(!flag) continue;
            mov=a[i];
            a[i]=a[tmp];
            a[tmp]=mov;
            sort(a.begin()+i+1,a.end());
            return;
        }
        sort(a.begin(),a.end());
    }
};
