class Solution {
  public:
    int findPosition(int N) {
        if(N==0) return -1;
        int x=log2(N);
        if(pow(2,x)==N){
            return x+1;
        }
        return -1;
    }
};
