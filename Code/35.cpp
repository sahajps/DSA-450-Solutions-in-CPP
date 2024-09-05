class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());
		    int n=v.size();
		    if(n%2!=0)
		        return v[(n+1)/2-1];
		    
		    return (v[n/2-1]+v[n/2])/2;
		}
};
