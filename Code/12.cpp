class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    int i=0,j=0,iput=0,jput=0;
	    queue<int> q;
	    while(i<n and j<m){
	        if(arr1[i]<=arr2[j]){
	            q.push(arr1[i]);
	            i++;
	        }
	        else{
	            q.push(arr2[j]);
	            j++;
	        }
	        while(iput<i and !q.empty()){
	            arr1[iput]=q.front();
	            q.pop();
	            iput++;
	        }
	    }
        while(i<n){
            q.push(arr1[i]);
            i++;
            while(iput<i and !q.empty()){
	            arr1[iput]=q.front();
	            q.pop();
	            iput++;
	        }
	        while(iput==n and jput<j and !q.empty()){
	            arr2[jput]=q.front();
	            q.pop();
	            jput++;
	        }
        }
	    while(j<m){
	        q.push(arr2[j]);
	        j++;
	        while(jput<j and !q.empty()){
	            arr2[jput]=q.front();
	            q.pop();
	            jput++;
	        }
	    }
	    
	}
};
