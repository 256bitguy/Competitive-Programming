#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	             cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	             k-=a[i];
	    }
	    if(k<0)
	    {
	             cout<<"No"<<endl;
	    }
	    else
	    {
	             cout<<"Yes"<<endl;
	    }
	}
	     
	return 0;
}
