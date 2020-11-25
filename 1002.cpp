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

vector < pair < int , int > >v[510];

int d[510];

int n , m;

priority_queue < int > q;

void modifiedbfs( int s ){

	q.push( s );

	while ( !q.empty() ){

		int from = q.top();

		q.pop();

		for ( int i = 0 ; i < v[from].size(); i++ ){

			int to = v[from][i].f1;

			int temp = max ( d[from] , v[from][i].f2 );

			if ( temp < d[to] ){

				d[to] = temp;

				q.push( to );
			}

		}

	}

}

int main(){
    
    int tc;

    sf ( tc );

    for ( int cs = 1; cs <= tc; cs++ ){


    	for ( ll i = 0; i <= 510; i++ ){

    		d[i] = 1e6;

    		v[i].clear();
    	}

    	sf ( n ) , sf ( m );

    	int x , y , w;

    	map < pair <int, int > , bool > mm;

    	for ( ll i = 1; i <= m; i++ ){

    		sf ( x ) , sf ( y ) , sf ( w );

    		v[x].pb( mp( y , w) );

    		v[y].pb( mp( x , w) );
    	}

    	int t;

    	sf ( t );

    	d[t] = 0;

    	modifiedbfs( t );

    	printf("Case %d:\n",cs);

    	for  ( int i = 0; i < n; i++ ){

    		if ( d[i] != 1e6 ){

    			printf("%d\n",d[i]);
    		}
    		else{

    			printf("Impossible\n");
    		}
    		
    	}

    }

}


