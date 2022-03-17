#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,r,St;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	//sort(arr,arr+n);
	cin>>r;
	for(int i=0;i<r;i++){
		cin>>St;
		int cnt=0,tot=0;
		for(int j=0;j<n;j++){
			if(St>=arr[j]){
				cnt++;
				tot+=arr[j];
			}
		}
		cout<<cnt<<" "<<tot<<endl;

	}
	return 0;
}
