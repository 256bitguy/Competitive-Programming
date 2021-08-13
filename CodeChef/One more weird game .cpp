 #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int max=0,min=0;
	    if(n>m)
	    {
	             max=n;min=m;
	    }
	     if(n<=m)
	    {
	             max=m;min=n;
	    }
	     //2*(min-1)*min is the total number of score obtained by the square region
	     //(max-min) is the total number of score obtained by the remaining rectangular region
	     //((max-min)/2)*2 is the total number of score obtained by the horizontal  single rectangular grid 
	     //max-min)%2 is the total number of score obtained by the remaining 1 square for only one shared cell 
	    cout<<2*min*(min-1)+(max-min)*(min-1)*2+((max-min)/2)*2+(max-min)%2<<endl;
	}
 
	     
	return 0;
}
 
