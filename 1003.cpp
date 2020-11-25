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
#define                 ll                                  long  long
#define                 lf                                  double 
#define                 pb(x)                               push_back(x)
#define                 ull                                 unsigned long long
#define                 sfl(a)                              scanf("%lld",&a)
#define                 sf(a)                               scanf("%d",&a)
#define                 pf(a)                               printf("%d\n",a)
#define                 pfl(a)                              printf("%lld\n",a)
#define                 pdl(a)                              printf("%llf\n",a)
#define                 FOR(x,n)                            for(int x=1;x<=n;++x)
#define                 vii                                 vector< ll > v
#define                 pi                                  3.14159265359
#define                 mex                                 10000000
#define                 pii                                 pair< ll , ll >
#define                 mem(m)                              memset( m, 0, sizeof m)
#define                 mp(a,b)                             make_pair(a,b)
#define                 maxn                                100000
#define                 mod                                 1000000007
#define 				INF									1e17
#define 				f1 									first
#define 				f2									second

using namespace std;



int main(){
    
    ll n , k;

    sfl ( n ) , sfl ( k );

    ll a, cumsum[n+10];

    cumsum[0] = 0;

    for ( ll i = 1; i <= n; i++ ){

    	sfl ( a );

    	cumsum[i] = cumsum[i-1] + a;
    }

    double ans = 0;

    while ( 1 ){

    	for ( ll i = 1; i <= n-k+1; i++ ){

    		ll sum = cumsum[i+k-1] - cumsum[i-1];

    		ans = max( ans , sum / double(k) );

    	}

    	k++;

    	if ( k > n ) break;
    }

   	printf("%.8lf\n",ans);

}


