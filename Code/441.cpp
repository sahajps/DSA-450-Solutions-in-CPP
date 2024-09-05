class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        int cnt=0;
        while(a or b){
            if((a&1)^(b&1)) cnt++;
            a=a>>1;
            b=b>>1;
        }
        return cnt;
    }
};
