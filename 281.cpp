class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> st;
        vector<long long> ans(n,-1);
        
        for(int i=0;i<n;i++){
            while(!st.empty() and arr[st.top()]<arr[i]){
                ans[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
        
        return ans;
    }
};
