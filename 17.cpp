class Solution {
public:
    int maxProfit(vector<int>& pri) {
        int mini=pri[0],pro=0;
        for(int i=1;i<pri.size();i++){
            if(pri[i]>mini){
                pro=max(pro,pri[i]-mini);
            }
            else{
                mini=pri[i];
            }
        }
        
        return pro;
    }
};
