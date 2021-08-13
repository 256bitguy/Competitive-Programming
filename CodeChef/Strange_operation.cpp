#include <bits/stdc++.h>
using namespace std;

int main() {
	 
	int t;
	cin>>t;
	while(t--)
	{
	         int n,k;
	         cin>>n>>k;
	         int a[n+k],sum=0;
	         for(int i=0;i<n;i++)
	         {
	                  cin>>a[i];
	                  sum+=a[i];      //sum of elements in the array.
	         }
    //This is another loop for the elementss of index greater than n.
	         for(int i=n;i<n+k;i++)
	         {
	                  a[i]=sum+1;
	                  sum+=a[i];
	         }
    // This if condition check whether the ;ast element inserted is even or odd.
	         if(a[n+k-1]%2==0){cout<<"even"<<endl;}      
	           if(a[n+k-1]%2!=0){cout<<"odd"<<endl;}
	    
	}
	     
	return 0;
}
