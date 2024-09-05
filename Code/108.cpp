#include <iostream>
#include <algorithm>
using namespace std;

int binSrc(int arr[],int n,int x){
	int i=0,j=n-1;
	while(i<=j){
		int mid=(i+j)/2;
		if(arr[mid]<=x && (mid==n-1 || arr[mid+1]>x)){
			return mid;
		}
		else if(arr[mid]>x){
			j=mid-1;
		}
		else{
			i=mid+1;
		}
	}
	return -1;
}

int main(){
	int n,r,St;
	cin>>n;
	int arr[n],tot[n];
	for(int i=0;i<n;i++) cin>>arr[i];

	sort(arr,arr+n);
	tot[0]=arr[0];
	for(int i=1;i<n;i++) tot[i]=tot[i-1]+arr[i];

	cin>>r;
	while(r--){
		cin>>St;
		int cnt=binSrc(arr,n,St);
		cout<<cnt+1<<" "<<tot[cnt]<<endl;
	}
	return 0;
}

