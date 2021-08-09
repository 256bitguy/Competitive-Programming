#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int  traingular_number,total_sum=0 ,i=0;
	cin>>traingular_number ;
   while(total_sum!=traingular_number){
            i++;
         
        total_sum+=i;
        if(total_sum>traingular_number){
                 cout<<"NO";
                 break;
                 
        }
          }
          if(total_sum==traingular_number)
          {
                   cout<<"YES";
          }
 	return 0;
}
