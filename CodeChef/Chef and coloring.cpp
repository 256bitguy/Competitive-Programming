#include <bits/stdc++.h>
using namespace std;
/*logic-->count the maximum number of color in the given string
and subtract it from the the size of the string*/
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{int n;
	cin>>n;
	char A[n];
	//count the diffrent number of color in the string using these variables
	int counterR=0,counterG=0,counterB=0;
	for(int i=0;i<n;i++)
	{
	         cin>>A[i];
    //count the total number of different color entry
	         if(A[i]=='R')
	         {
	               counterR++;   
	         }
	            if(A[i]=='G')
	            {
	                 counterG++;      
	            }
	               if(A[i]=='B')
	               {
	                  counterB++;        
	               }
	         
	}
	int max=0;
	if(counterB>=counterG)
	{
	         max=counterB;
	}
	else
	{
	         max=counterG;
	}
	if(max>counterR)
	{
	         cout<<n-max<<endl;
	}
	else
	{
	         cout<<n-counterR<<endl;
	}
	
	    
	}
	     
	return 0;
}
