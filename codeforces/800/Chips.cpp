#include <bits/stdc++.h>
using namespace std;

int main() {
 
       int a,b;
        cin>>a>>b; int i=1;
        while(b>0)
        { 
          if(i>a){i =i%a;}             //if index exceeds the size then use modulo ;
          
        if(b-i<0)
        {
                 break;
        }
               b-=i;
               
               i++; 
        }
          cout<<b;
        
	return 0;
}
