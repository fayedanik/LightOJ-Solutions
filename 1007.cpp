//bismillahir rahmanir rahim
#include <iostream>
#include <math.h>
#include <string.h>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cstdio>
#include <iterator>
#define ll long  long
#define pb(x) push_back(x)
#define ull unsigned long long
#define sfl(a) scanf("%lld",&a)
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define pfl(a) printf("%lld\n",a)
#define FOR(x,n) for(int x=1;x<=n;++x)
#define vii vector< ll > v
#define pi 3.14159265359
#define mex 10000000
#define M 5000000
#define pii pair< ll , ll >
#define mem(m) memset( m, 0, sizeof m)
using namespace std;
int nx[]={1,-1,0,0};
int ny[]={0,0,-1,1};
ll r,c;
bool check(ll xx, ll yy){
    return (xx>=1 and xx<=r and yy>=1 and yy<=c);
}
bool boundary(ll xx, ll yy){
    return (xx==1 or xx==r or yy==1 or yy==c);
}

int phy[M];
unsigned ll cumsum[M];
void eulerphy(){
   
    //memset( prime ,0, sizeof prime);
   
    for( ll i=1; i<=M; i++){
        phy[i]=i;
    }
    
    for( ll i=2; i<=M; i++){
        if(phy[i]==i){
            for( ll j=i; j<=M; j+=i){
                phy[j]=phy[j]-(phy[j]/i);
            }
        }
    }
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll tc;
   
    eulerphy();
 
    sfl(tc);
    cumsum[1]=0;
    for( ll i=2; i<= M; i++){
    	cumsum[i]=phy[i];
    	cumsum[i]*=phy[i];
        cumsum[i]+=cumsum[i-1];
    }
    ll cs=1;
    while(tc--){
        ll a , b;
        sfl(a),sfl(b);
        printf("Case %lld: ",cs++);
        unsigned ll ans=cumsum[b]-cumsum[a-1];
       	printf("%llu\n", ans);
    }

  }