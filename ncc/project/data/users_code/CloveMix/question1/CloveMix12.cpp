#include <bits/stdc++.h>
#define pb push_back
#define int long long
#define ll long long
#define f first
#define MOD 1000000007
#define se second
ll fpow(ll x,ll y){

}
using namespace std;
signed main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>k>>n;
		int s=0;
		int ans=0;
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