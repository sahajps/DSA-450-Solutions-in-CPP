class Solution {
  public:
    int countSquares(int N) {
        int ans=sqrt(N);
        if(ans*ans==N){
            ans--;
        }
        return ans;
    }
};
