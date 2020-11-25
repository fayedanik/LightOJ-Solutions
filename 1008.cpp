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
#define           ll                         long  long
#define           lf                         double 
#define           pb(x)                      push_back(x)
#define           ull                        unsigned long long
#define           sfl(a)                     scanf("%lld",&a)
#define           sf(a)                      scanf("%d",&a)
#define           pf(a)                      printf("%d\n",a)
#define           pfl(a)                     printf("%lld\n",a)
#define           pdl(a)                     printf("%llf\n",a)
#define           FOR(x,n)                   for(int x=1;x<=n;++x)
#define           vii                        vector< ll > v
#define           pi                         3.14159265359
#define           mex                        10000000
#define           pii                        pair< ll , ll >
#define           mem(m,a)                   memset( m, a,sizeof m)
#define           mp(a,b)                    make_pair(a,b)
#define           maxn                       100000
#define           mod                        1000000007
#define 		  INF						 1e17
#define 		  f1 						 first
#define 		  f2						 second
#define 		  all(v)					 v.begin(),v.end()
#define           PI                         acos(-1)
#define           printminusone              print("-1\n")

using namespace std;



int main(){
   
    ll tc,cs= 0;

    sfl ( tc );

    for ( ll cs = 1;  cs <= tc ; cs++ ){

    	ll n,x,y;

    	printf("Case %lld: ", cs);

    	sfl ( n );

    	ll sq = ceil(sqrt(n));

    	ll c = 2*sq-1;

    	ll a = sq*sq-c;

    	ll b = n-a;

    	if  ( sq & 1 ){

    		//cout << n <<' '<<c<<' '<<a<<' '<<b << endl;

    		if ( b < sq ){

    			printf("%lld %lld\n", sq, b);
    		}

    		else{

    			printf("%lld %lld\n",c-b+1,sq);
    		}
    	}

    	else{

    		if ( b < sq ){

    			printf("%lld %lld\n",b, sq );
    		}

    		else{

    			printf("%lld %lld\n",sq,c-b+1);
    		}
    	}

    }

}