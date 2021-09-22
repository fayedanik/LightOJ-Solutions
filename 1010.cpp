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
#define max 10000000
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
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	ll tc;
	sfl(tc);
	for( ll cs=1; cs<=tc; cs++){
		printf("Case %lld: ",cs);
		ll r,c;
		sfl(r),sfl(c);
		if(r==1 or c==1){
			printf("%lld\n",r*c);
		}
		else if(r==2 or c==2){
			ll tmp;
			if(r==2){
				tmp=c;
			}
			else{
				tmp=r;
			}
			if(tmp%4==0){
				tmp=tmp;
			}
			else if(tmp%4==1){
				tmp+=1;
			}	
			else if(tmp%4==2){
				tmp+=2;
			}
			else{
				tmp+=1;
			}
			pfl(tmp);
		}
		else{
			ll ans;
			if(c%2==0){
				ans=(c/2)*r;
			}
			else{
				ans=ceil(c/2.0)*r;
				//cout<<ans<<endl;
				ans=ans-r/2;
			}
			pfl(ans);
		}
	}

}


