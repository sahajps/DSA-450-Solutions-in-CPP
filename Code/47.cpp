class Solution {
public:
    void reverseString(vector<char>& s) {
        char tmp;
        for(int i=0;i<s.size()/2;i++){
            tmp=s[i];
            s[i]=s[s.size()-i-1];
            s[s.size()-i-1]=tmp;
        }
    }
};
