#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{//taking the value of "m houses" and "x speed " and "y time"
	         int m,x,y;
	         cin>>m>>x>>y;
	         int A[m];
	         for(int i=0;i<m;i++)
	         {
	                  cin>>A[i];
	         }
	         // initialising the value of 100 houses with a constant
	         int B[100];
	         for(int i = 0; i < 100; i++)
	                 {
                          B[i] = 5;
                           }
                           
                           int tot_house=x*y;
                           // sorting the value of house number
                           sort(A,A+m);
                           
	         for(int i=0;i<m;i++)
	         {
	                  //finding the house number from starting to the end (100)
	                  int a,b;
	                  a=A[i]-tot_house;
	                  b=A[i]+tot_house;
	                  if(a<0)
	                  { a=0;}
	                  if(b>100)
	                  { b=100;}
	             //substituting the value of house to 1 that can be overtaken by police
	                  for(int c=a-1;c<b;c++)
	                  {
	                           B[c]=1;
	                  }
	                   
	          }
	          //counting the number of house where the presence of the cops can be 0
	          int counter=0;
	          for(int i = 0; i < 100; i++)
	                 {
                               if( B[i]== 5)
                                   counter++ 
                           }
	     cout<<counter<<endl;
	}
	     
	return 0;
}
