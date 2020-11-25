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
#define         ll                         long  long
#define         lf                         double 
#define         pb(x)                      push_back(x)
#define         ull                        unsigned long long
#define         sfl(a)                     scanf("%lld",&a)
#define         sf(a)                      scanf("%d",&a)
#define         pf(a)                      printf("%d\n",a)
#define         pfl(a)                     printf("%lld\n",a)
#define         pdl(a)                     printf("%llf\n",a)
#define         FOR(x,n)                   for(int x=1;x<=n;++x)
#define         vii                        vector< ll > v
#define         pi                         3.14159265359
#define         mex                        10000000
#define         pii                        pair< ll , ll >
#define         mem(m,a)                   memset( m, a,sizeof m)
#define         mp(a,b)        		   make_pair(a,b)
#define		maxn                       100000
#define		mod                        1000000007
#define		INF			   1e17
#define 	f1 			   first
#define		f2			   second
#define		all(v)		           v.begin(),v.end()
#define		PI                         acos(-1)
#define		printminusone              printf("-1\n")
#define		bug			   printf("bug")

using namespace std;

ll dp[40][40];

ll solve( ll n , ll r ){

	if( r == 1 ){

		return n;
	}

	if ( n == r ){

		return 1;
	}

	if( dp[n][r] != -1 ){

		return dp[n][r];
	}

	else{

		dp[n][r] = solve(n-1,r)+solve(n-1,r-1);

		return dp[n][r];
	}


	
}

int main(){


	ll tc;

	sfl ( tc );

	for ( ll cs = 1; cs <= tc; cs++ ){

		printf("Case %lld: ",cs);

		memset ( dp , -1 , sizeof dp );

		ll n , k;

		sfl ( n ), sfl ( k );

		if ( k == 0 ){

			printf("1\n");

			continue;
		}

		if ( n < k ){

			printf("0\n");

			continue;
		}

		if ( k == 1 ){

			pfl ( n*n );

			continue;
		}

		ll ans1 =solve(n,k);

		ll res = 1;

		for ( ll i = n-k+1; i <= n; i++ ){

			res = res * i;
		}

		pfl ( ans1 * res );
	}

}