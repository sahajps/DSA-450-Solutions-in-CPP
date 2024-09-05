class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> tmp(4);
        int n=arr.size(),find;
        for(int i=0;i<n;i++){
            tmp[0]=arr[i];
            //find=k-arr[i];
            for(int j=i+1;j<n;j++){
                tmp[1]=arr[j];
                find=k-arr[i]-arr[j];
                
                int t1=j+1,t2=n-1;
                while(t2>t1){
                    if(arr[t1]+arr[t2]==find){
                        tmp[2]=arr[t1];
                        tmp[3]=arr[t2];
            
                        bool flag=false;
                        for(int chk=0;chk<ans.size();chk++){
                            if(ans[chk][0]==tmp[0] and ans[chk][1]==tmp[1] and ans[chk][2]==tmp[2] and ans[chk][3]==tmp[3]){
                                flag=true;
                                break;
                            }
                        }
                        if(!flag) ans.push_back(tmp);
                        t1++;t2--;
                    }
                    else if(arr[t1]+arr[t2]<find) t1++;
                    else t2--;
                }
            }
        }
        return ans;
    }
};
