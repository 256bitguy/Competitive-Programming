#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int number_of_kids,comparison_constant;
	cin>>number_of_kids;
	comparison_constant=number_of_kids;
	comparison_constant-=1;
	int pos=1,index=1;
         while(comparison_constant--){
           
           index+=pos;
           if(index>comparison_constant)
           {
                    index=index%number_of_kids;    //This logic is very important because it gives the same position index as it aplies same in  a circle
           }
          cout<<index<<" ";
          pos+=1;
          }
	     
	return 0;
}
