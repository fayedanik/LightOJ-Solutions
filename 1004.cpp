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

ll a[210][110];

ll dp[210][110];

ll n;

ll solve ( ll i , ll j ){

	if ( i >= 1 and i <= 2*n and j >= 1 and j <=n ){


		if ( dp[i][j] != -1 ) return dp[i][j];

		if ( i < n ){

			ll p1 = a[i][j]+solve(i+1,j);

			ll p2 = a[i][j]+solve(i+1,j+1);

			dp[i][j] = max (p1,p2);

			return dp[i][j];
		}

		else{

			if ( j == 1  ){

				return dp[i][j] = max(dp[i][j],a[i][j]+solve(i+1,j));
			}

			else if ( j == n ){

				return dp[i][j] = max (dp[i][j],a[i][j]+solve(i+1,j-1));
			}

			else{

				return dp[i][j] = max( a[i][j]+solve(i+1,j), a[i][j]+solve(i+1,j-1) );
			}
		}

	}

	else{

		return 0;
	}
}

int main(){

	int tc;

	sf ( tc );

	for ( ll cs = 1; cs <= tc; cs++ ){

		sfl ( n );

		for( ll i  = 1; i <= n;i++ ){

			for ( ll j = 1; j <= i; j++ ){

				sfl ( a[i][j] );
			}
		}

		for  ( ll j = 1; j < n; j++ ){

			for ( ll k = 1; k <= n-j; k++ ){

				sfl ( a[n+j][k] );
			}
		}

		memset ( dp ,-1 , sizeof dp );

		ll ans = solve ( 1 , 1 );

		memset ( a , 0 , sizeof a );

		printf("Case %lld: ",cs);

		pfl( ans );

	}
}