class Solution{
  public:
    int middle(int A, int B, int C){
        if(A>B and A>C){
            return max(B,C);
        }
        else if(B>A and B>C){
            return max(A,C);
        }
        else{
            return max(A,B);
        }
    }
};
