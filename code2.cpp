#include<iostream>
using namespace std;
// practice binary search
int binary_search(int arr[],int k ,int n){
	int low=0;
	int high=n-1;
	while (low<=high)
	{
		int mid =(high+low)/2;
		if (arr[mid]==k)
		{
			return mid;
		}
		else if(arr[mid]<k){
			low=mid+1;
		}
		else if(arr[mid]>k){
			high=mid-1;
		}
		
	}
	return -1;
}
int main(){
	int k,arr[]={10,11,12,13,14};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<n<<endl;
	cout<<"enter key to be found "<<endl;
	cin>>k;
	int ans =binary_search(arr,k,n);
	cout<<ans;
	return 0;
}
