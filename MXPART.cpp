#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long a[n],c=0,max=0;
	    for(long long i =0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    for(long long i =0; i<n; i++)
	    {
	         if(a[i]>max)
	         {
	             max=a[i];
	         }
	         if(max==i+1)
	         {
	             c++;
	         }    
	    }
	    cout<<c<<endl;
	}
	return 0;
}