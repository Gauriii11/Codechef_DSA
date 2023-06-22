#include <bits/stdc++.h>
#define h long long
using namespace std;

int main() 
{
	    int n;
	    cin>>n;
	    vector<int>v1,v2;
	    for(int i=0;i<n;i++)
	    {
	        int k;
	        cin>>k;
	        v1.push_back(k);
	    }
	    for(int i=0;i<n;i++)
	    {
	        int k;
	        cin>>k;
	        v2.push_back(k);
	    }
	    int s1=accumulate(v1.begin(),v1.end(),0);
	    int s2=accumulate(v2.begin(),v2.end(),0);
	    if(s1<s2)
	    cout<<-1<<endl;
	    else
	    {
	        int index=0;
	        int sum1=0,sum2=0;
	        for(int i=0;i<n;i++)
	        {
	            sum1+=v1[i];
	            sum2+=v2[i];
	            if(sum1<sum2)
	            {
	                index=i+1;
	                sum1=0;
	                sum2=0;
	            }
	        }
	        cout<<index<<endl;
	    }
	return 0;
}