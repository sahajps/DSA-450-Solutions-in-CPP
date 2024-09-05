class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> box;
        for(int i=0;i<x.size();i++){
            if(x[i]=='(' or x[i]=='{' or x[i]=='[') box.push(x[i]);
            else if(!box.empty() and abs(box.top()-x[i])<3){
                box.pop();
            }
            else return false;
        }
        return box.empty();
    }

};
