#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,d;
cin>>n>>d;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,a+n);
int counter=0;
for(int i=0;i<n-1;i++)
{for(int j=i+1;j<n;j++){
if((a[j]-a[i])<=d)
{
counter++;
}
}
}
cout<<2*counter;
return 0;
}
