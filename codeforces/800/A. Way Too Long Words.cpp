#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string spelling;
	    cin>>spelling;
	    int size= spelling.size();
	    if(size>10){
	    cout<< spelling[0]<<size-2<<spelling[size-1]<<endl;
	                }
	                else
	                {
	                         cout<<spelling<<endl;
	                }
	}
	return 0;
}
