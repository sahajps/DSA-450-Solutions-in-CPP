class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> ans;
            int i=0,j=0,k=0,maxi=INT_MIN,prev=INT_MIN;
            while(i<n1 and j<n2 and k<n3){
                if(A[i]==B[j] and B[j]==C[k]){
                    if(prev==A[i]){
                        i++;j++;k++;
                        continue;
                    }
                    prev=A[i];
                    ans.push_back(A[i]);
                    i++;j++;k++;
                    continue;
                }
                maxi=max(A[i],max(B[j],C[k]));
                if(A[i]<maxi){
                    i++;
                }
                if(B[j]<maxi){
                    j++;
                }
                if(C[k]<maxi){
                    k++;
                }
            }
            return ans;
        }

};
