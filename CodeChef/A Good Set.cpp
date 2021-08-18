#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{//partially correct answer 
	    int n;
	    cin>>n;
	    int A[n];
	   /* if(n<2)
	    {
	             cout<<3<<endl;
	    }
	     if(n=2)
	    {
	             cout<<3<<" "<<5<<endl;
	    }*/
	      
	             for(int i=0;i<n;i++)
	             {
	                  int v2 = rand() % 501 + 1;
	                  A[i]=v2;
	                     
	             }
	             
	              for(int a=0;a<n;a++)
	             { for(int b=a+1;b<n;b++)
	             {int sum=A[a]+A[b];
	                     for(int c=0;c<n;c++){
	                              if(A[c]==sum)
	                              {
	                                       A[c]+=5;
	                              }
	                     } 
	             }
	                      
	             }
	             for(int i=0;i<n;i++){
	                      cout<<A[i]<<"\t";
	             }
	             cout<<endl;
	      
	}
	     
	return 0;
}
