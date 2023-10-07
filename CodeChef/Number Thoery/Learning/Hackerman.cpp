/////////////////______________VIVEK RAJ SRIVASATAVA_________________***********//
#include <bits/stdc++.h>
using namespace std;
#define T  int t;cin>>t;while(t--)
#define fl(i,a,b) for(int i=a;i<b;i++)
/*_____________________________FUNCTION_______________________*****/
int ceel(int a,int b){
    if(a%b!=0){
        return (a/b+1);
    }
    else{
        return (a/b);
    }
}
int mini(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int maxi(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int maxinarr(int A[],int size){
    int max=A[0];
    fl(i,0,size){
        if(max<A[i]){
            max=A[i];
        }
    }
    return max;
}
int mininarr(int A[],int size){
    int min=A[0];
    fl(i,0,size){
        if(min>A[i]){
            min=A[i];
        }
    }
    return min;
}
int count_max_number_of_rept(int A[],int size){
    sort(A,A+size);
    int ma=0,count=0;
    fl(i,0,size){count=0;
        int a=A[i];
        while(A[i+1]==a){
            count++;
            i++;
        }
        ma=max(ma,count+1);
    }
    return ma;
}
long long gcdkyahai(int a,int b){
    long long c=mini(a,b),d=maxi(a,b);
    if(d%c==0){
        return c;
    }
    long long k=gcdkyahai(c,d%c);
    return k;
}
/*________________________________________________________________

/*how to change the aphadigit to int
just int a=apha_digit-48
how to change a to 0
just s[i]-65-32
_________________________________________________________________*/

/*
1.long long gcdkyahai(int a,int b)
2.int count_max_number_of_rept(int A[],int size)
3.int mininarr(int A[],int size)
4.int maxinarr(int A[],int size)
5.int ceel(int a,int b)
6.int mini(int a,int b)
7.int maxi(int a,int b)



*/
void solve()
{
    int a,b;
    cin>>a>>b;
    int sum=a+b;  
    if(sum==2||sum==3||sum==5||sum==7||sum==11)cout<<"Alice\n";
    else cout<<"Bob\n";
       
           
           
       
    
}


int main() {
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
T{
    	solve();
}
	return 0;
}
