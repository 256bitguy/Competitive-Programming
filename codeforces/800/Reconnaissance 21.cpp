#include<bits/stdc++.h>
using namespace std;
int main()
{
int a;
cin>>a;
int b[a];
  //initialising the array
for(int i=0;i<a;i++)
{
  cin>>b[i];
}int min=10000,c=0 ,x,y;
for(int i=0;i<a;i++)
{
  
  c=abs(b[i]-b[i+1]);
  if(c<min)
 {
          min=c;
          x=i;
          y=i+1;
 }
 if(i==a-1)
 {
          c=abs(b[a-1]-b[0]);
            if(c<min)
            {
              min=c;
               x=a-1;
                y=0;
           }
 }
}
  //if threa are only two element in the array then it will display only two index starting from 1
if(a==2)
{
         cout<<1<<" "<<2;
}
if(a>2){
  // if the next element to any element is greater than that then it will print index in ascending order     
 if(x<y){
cout<<x+1<<" "<<y+1;}
  //if the element  next to the last element in the circle is greater than it then it will print the last index first then it will print the first index 
if(x>y)
{
   cout<<x+1<<" "<<y+1;      
}}
return 0;
}
