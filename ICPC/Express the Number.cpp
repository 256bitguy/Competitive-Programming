 
#include <bits/stdc++.h>


#define loop(a,b,c)      for(int a=b;a<c;a++)
#define loopr(a,b,c)     for(int a=b;a>c;a--)
#define nl               ("\n")
#define gcd(a,b)         __gcd(a,b)
#define int              long long
#define double           long double
#define vi               vector<int>
#define vb               vector<bool>
#define vs               vector<string>
#define pb(n)            push_back(n)
#define mp(a,b)          make_pair(a,b)
#define ff               first
#define ss               second             
#define sz(s)            (s.size())*1LL
#define google(T)        cout<<"Case #"<<T<<": "
#define testcases        int t; cin>>t; loop(i,1,t+1) solve(i)
#define mod              1000000007
#define modadd(a,b,c)    ((a%c)+(b%c))%c
#define modmul(a,b,c)    ((a%c)*(b%c))%c
#define modsub(a,b,c)    ((a%c)-(b%c))%c
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
  int n,x;
  cin>>n>>x;

  if(x>=n){
    cout<<1<<nl;
    return;
  }

  int cnt = 0;
  while(n>=2){
    ++cnt;
    int t = log2(n);
    if(!(t&1)) --t;
    n -= power(2,t);
    if(n == 0){
      cout<<cnt<<nl;
      return;
    }
    if(x>=n){
      cout<<cnt+1<<nl;
      return;
    }
  }

  if(n == 0){
    cout<<cnt<<nl;
  }
  else if(x>=n){
    cout<<cnt+1<<nl;
  }
  else cout<<-1<<nl;
}


signed main()
{
  RUN();


  testcases;
 


  return 0;
}


 
int power(int a,int n)
{
  int res=1;
  while(n)
  {
    if(n&1) {res*=a;--n;}
    else {a*=a;n/=2;}
  }
  return res;
}
