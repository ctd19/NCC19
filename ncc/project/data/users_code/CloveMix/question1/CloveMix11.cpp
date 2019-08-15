#include <bits/stdc++.h>
#define pb push_back
#define int long long
#define f first
#define MOD 1000000007
#define se second
ll fpow(ll x,ll y){

}
using namespace std;
signed main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int s=0;
		for(int i=0;i<k;i++){
			int x;cin>>x;
			s+=x;
			if(s<=n){
				ans++;
			}
		}
		cout<<ans<<"\n";
	}
}	