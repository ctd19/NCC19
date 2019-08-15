#include<bits/stdc++.h>
#define MOD 1000000007
#define pb push_back
#define all(v) v.begin(),v.end()
#define bolt ios::sync_with_stdio(0)
#define light cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;

int main(){
	//bolt;
	//light;
	ll t,i,n,b,j,val;
	cin>>t;
	while(t--){
		cin>>n>>b;
		if(n<b){
			cout<<n%b<<"\n";
			continue;
		}
		if(n==b){
			cout<<(n-1+b)%b<<"\n";
			continue;
		}
		val=1;
		for(i=1;i<=b-1;i++){
			val=(val*i)%b;
		}
		if(n%b!=0){
		for(i=1;i<=n%b;i++)
			val=(val*i)%b;
		}
		cout<<val<<"\n";
	}
}