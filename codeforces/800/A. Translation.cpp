#include <bits/stdc++.h>
using namespace std;
void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
 

int main() {
 
 string s1,s2;
 cin>>s1>>s2;
 int a1,a2;
 a1=s1.size();
 a2=s2.size();
 reverseStr(s2);
  int check=1;
 
  for(int i=0;i<a1;i++)
 {
          if(s1[i]!=s2[i])
          {
                   cout<<"NO"<<endl;
                   check=0;
                   break;
          }
 } 
 if(check!=0)
{
          cout<<"YES\n";
}
 
 
	return 0;
}
