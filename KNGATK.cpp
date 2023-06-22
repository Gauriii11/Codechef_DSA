#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t; cin>>t;
	while(t--){
	    ll n ; cin>>n;
	    ll arr[n];
	    for(ll i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    if(n==1){
	        cout<<arr[0]<<endl;
	    }
	    else {
	        ll lowest = arr[0];
    	    for(ll i=0;i<n;i++){
    	        lowest = min(lowest,arr[i]);
    	    }
    	    ll second_lowest = LONG_MAX;
    	    for(ll i=0;i<n;i++){
    	        if(arr[i] != lowest){
    	            second_lowest = min(second_lowest,arr[i]);
    	        }
    	    }
    	    cout<<second_lowest<<endl;
	    }
	}
	return 0;
}