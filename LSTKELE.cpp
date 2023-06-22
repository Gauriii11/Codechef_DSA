#include <iostream>
using namespace std;
#include<algorithm>

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int* arr=new int[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<k;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	    delete[] arr;
	}
	return 0;
}
