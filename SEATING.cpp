#include <bits/stdc++.h>
using namespace std;

int main() {
    
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    long long t1=a[0],t2=a[n-1];
	    cout<<4*(t2-t1)<<endl;
	    
	}
	return 0;
}