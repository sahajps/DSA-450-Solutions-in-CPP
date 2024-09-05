class Solution {
public:
    vector<int> factorial(int N){
        vector<int> fac;
        int carry=0;
        fac.push_back(1);
        for(int i=2;i<=N;i++){
            for(int j=0;j<fac.size();j++){
                fac[j]=fac[j]*i+carry;
                carry=fac[j]/10;
                fac[j]=fac[j]%10;
            }
            while(carry!=0){
                fac.push_back(carry%10);
                carry=carry/10;
            }
        }
        reverse(fac.begin(),fac.end());
        return fac;
    }
