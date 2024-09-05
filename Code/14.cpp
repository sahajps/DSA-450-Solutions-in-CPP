class Solution {
public:

    vector<vector<int>> merge(vector<vector<int>> in) {
        sort(in.begin(),in.end(),[] (const auto &l, const auto &r) {return l[0] < r[0];});
        vector<vector<int>> ans;
        vector<int> tmp(2);
        //cout<<in[1][1]<<endl;
        //cout<<in.size();
        int start=in[0][0];
        int end=in[0][1];
        for(int i=1;i<in.size();i++){
            if(in[i][0]>end){
                tmp[0]=start;
                tmp[1]=end;
                ans.push_back(tmp);
                start=in[i][0];
                end=in[i][1];
            }
            else{
                end=max(end,in[i][1]);
            }
        }
        tmp[0]=start;
        tmp[1]=end;
        ans.push_back(tmp);
        return ans;
    }
};
