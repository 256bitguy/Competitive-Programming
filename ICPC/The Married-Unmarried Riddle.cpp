
#include <bits/stdc++.h>


#define loop(a,b,c)      for(int a=b;a<c;a++)
#define loopr(a,b,c)     for(int a=b;a>c;a--)
#define nl               ("\n")
#define gcd(a,b)         __gcd(a,b)
#define int              long long
 
#define testcases        int t; cin>>t; loop(i,1,t+1) solve(i)
#define mod              1000000007
 
#define all(v)           (v).begin(),(v).end()
#define sp(n)            cout<<setprecision(n)<<fixed;
#define in(v)            for(auto &item : v) cin>>item;
#define inp(v)           for(auto &item : v) cin>>item.ff>>item.ss;
#define db(v)            for(auto item : v) cerr<<item<<" ";cerr<<nl;
#define dbp(v)           for(auto item : v) cerr<<item.ff<<" : "<<item.ss<<" | ";cerr<<nl;


using namespace std;


void RUN()
{
  ios::sync_with_stdio(0); 
  cin.tie(0); 
  cout.tie(0);
}

void sieve(int n);
int power(int a,int n);

 


void solve(int T)
{
  string s;
  cin>>s;

  loop(i,0,sz(s)){
    if(s[i] == 'M'){
      loop(j,i+1,sz(s)){
        if(s[j] == 'U'){
          cout<<"Yes"<<nl;
          return;
        }
      }
    }
  }

  cout<<"No"<<nl;
}


signed main()
{
  RUN();


  testcases;
  


  return 0;
}

 
