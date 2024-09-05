class Solution {
public:
    string say(string s){
        int count=0;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(count==0 or s[i]==s[i-1]){
                count++;
            }
            else{
                ans+=to_string(count)+s[i-1];
                count=1;
            }
        }
       
        ans+=to_string(count)+s[s.size()-1];
        
        return ans;
    }
    
    
    string countAndSay(int n) {
        string s="1";
        for(int i=2;i<=n;i++){
            s=say(s);    
        }
        
        return s;
    }
};
