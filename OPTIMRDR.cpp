#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
	// your code goes here

	  int n;
	  cin>>n;
	  int sum=0,sum1=0;
	  int a[n],b[n];
	  vector<pair<int,int>>v;
	  vector<pair<int,int>>v2;
	  for(int i=0;i<n;i++){
	  cin>>a[i];
	  v.push_back({a[i],i});
	  }
	  sort(v.begin(),v.end());
      for(int i=0;i<n;i++)
	  cin>>b[i];
	  sort(b,b+n);
	  for(int i=0;i<n;i++)
	  {
	      v[i].first=b[i];
	      v2.push_back({v[i].second,v[i].first});
	  }
	  sort(v2.begin(),v2.end());
	  for(int i=0;i<n;i++)
	  cout<<v2[i].second<<" ";
	  
	
	return 0;
}
