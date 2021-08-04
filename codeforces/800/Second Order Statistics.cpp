#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;

int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];

}
 //sort the given array
sort(a,a+n);
int m=a[0],j=0;
while( a[j]==m && j<n)
{j++;
}
 //if the index exceed the number of elements in the array then it reults in NO
if(j==n)
{
cout<<"NO";
}
else{
cout<<a[j];}
return 0;
}
