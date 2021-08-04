#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,d;
cin>>n>>d;// input the given number of soldieres and the height differences
int a[n];
        for(int i=0;i<n;i++)
           {
             cin>>a[i];
           }
sort(a,a+n);
int counter=0;
  //following lines aare the code to find the combination of heights which are in the range of 0 and d
for(int i=0;i<n-1;i++)
{
  for(int j=i+1;j<n;j++)
  {
         if((a[j]-a[i])<=d)
            {
            counter++;
             }
 }
}
cout<<2*counter;
return 0;
}
