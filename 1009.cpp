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
#define pi 3.14159265359
#define mex 10000000
using namespace std;
vector< int > edge[20005];
queue<int>q;
int visited[20005];
enum{
	NOT_VISITED,BLACK,RED
};
int bfs(int visited[],vector<int>edge[]){
	int mx=0;
	for(int i = 0 ; i < 20005 ; i++){
		int black=0,red=0;
		if(!edge[i].empty() and visited[i]==NOT_VISITED){
			//int node=i;
			q.push(i);
			visited[i]=BLACK;
			black++;
			while(!q.empty()){
				int frnt=q.front();
				q.pop();
				for(int j=0;j<edge[frnt].size();j++){
					if(visited[edge[frnt][j]]==NOT_VISITED){
						q.push(edge[frnt][j]);
						if(visited[frnt]==BLACK){
							visited[edge[frnt][j]]=RED;
							red++;
						}
						else{
							visited[edge[frnt][j]]=BLACK;
							black++;
						}
					}
				}
			}
			mx+=max(black,red);
		}
		//cout<<mx<<endl;
		
	}
	return  mx;
}
int main(){
	int tc;
	sf(tc);

	for(int cs=1; cs<=tc;cs++){
		loop(i,20005){
			edge[i].clear();
		}
		memset(visited,0,sizeof(visited));
		ll n;
		sfl(n);
		int x,y;
		loop(i,n){
			sf(x),sf(y);
			edge[x].pb(y);
			edge[y].pb(x);
		}
		
		int mx=bfs(visited,edge);
		printf("Case %d: %d\n",cs,mx);

	}
	return 0;

}