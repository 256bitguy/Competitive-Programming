#include <bits/stdc++.h>
using namespace std;
 

int main() {
 
 string str1 ;
 cin>>str1;
   
        int size_of_string,count_upper=0, count_lower=0;
            size_of_string=str1.size();
        char  new_string[size_of_string];
  
   for(int i=0;i<size_of_string;i++)
 {
         if ( isupper( str1[i])){
         count_upper++;                       //Count the number of uppercase letters
       }
 
     if ( islower(str1[i])){                      ////Count the number of  lowercase letters
      count_lower++;
      }
          
 } 
  
 if (count_lower>=count_upper)                  //if number of lowercase letters is strictly greater than the uppecase letters then convert it into the uppercase
 {
         for(int i=0;i<size_of_string;i++)
         {
           if ( isupper( str1[i]))
           {
                   str1[i]= tolower(str1[i]);
           }
         }
 }
  
 if (count_upper>count_lower)               //if number of lowercase letters is strictly greater than the uppecase letters then convert it into the uppercase
 {
         for(int i=0;i<size_of_string;i++)
         {
           if ( islower(str1[i]))
           {
                  str1[i]=  toupper(str1[i]);
           }
         }
 }
  
        cout<<  str1 ;   
  
 
	return 0;
}
