#include <bits/stdc++.h>
using namespace std;
 int main() {
  string str1,str2;
   cin>>str1>>str2;
   
    int size_of_string ;
        size_of_string=str1.size();
   
  char  new_string[size_of_string];
 
   for(int i=0;i<size_of_string;i++){
         
     if(str1[i]==str2[i])                //comparison of string characaters
          {
             new_string[i]='0';      
          }
          else
          {
              new_string[i]='1';   
          }
   } 
   
 for(int i=0;i<size_of_string;i++){
        cout<< new_string[i];   
 }
 
	return 0;
}
