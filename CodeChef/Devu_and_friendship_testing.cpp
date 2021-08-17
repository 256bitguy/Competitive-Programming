#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int i,k=0,u=n,h=n,a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    i=0;
	     int j;   j=a[0];
	    while(h--)
	    {
	      int count=0;
	     
	       while(j==a[i])
	      {
	               count++;
	               k++;
	               i++;
	      }
	      j=a[i];
	      
	      n=n-count+1;
	     
	        if(k==u) break;
	    }
	    cout<<n<<"\n";
	}
	     
	return 0;
}
