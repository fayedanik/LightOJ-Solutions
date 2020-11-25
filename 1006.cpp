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
#define loop(x,n) for(int x=0;x<n;++x)
#define vii vector< ll > v
#define pi 3.14159265359
#define max 10000000
#define pii pair<int,int>
using namespace std;
ll a,b,c,d,e,f,n;
int dp[10010];
ll func(ll n){
	if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n]!=-1){
    	return dp[n];
    }
    else{

    	dp[n]=(func(n-1) + func(n-2) + func(n-3) + func(n-4) + func(n-5) + func(n-6))%10000007;
    }
    return dp[n];
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	int tc;
	sf(tc);
	for ( ll cs=1; cs<=tc; cs++){
		memset(dp,-1,sizeof dp);
		sfl(a),sfl(b),sfl(c),sfl(d),sfl(e),sfl(f),sfl(n);
		printf("Case %lld: %lld\n",cs,func(n)%10000007);
	}
	return 0;

}


