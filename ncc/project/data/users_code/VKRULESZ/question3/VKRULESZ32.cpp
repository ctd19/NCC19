#include<bits/stdc++.h>
#define MOD 1000000007
#define pb push_back
#define all(v) v.begin(),v.end()
#define bolt ios::sync_with_stdio(0)
#define light cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;

int main(){
	bolt;
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll h[26]={0};
	for(ll i=0;i<n;i++){
		h[s[i]-'a']++;
	}
	ll maxx=0;
	for(ll i=0;i<26;i++){
		if(h[i]==0)
			continue;
		else{
			ll sum=0;
			ll f=0;
			for(ll j=0;j<n;j++){
				if(s[j]=='a'+i){
					sum++;
					if(f){
						maxx=max(maxx,sum);
					}
				}else{
					sum--;
					f=1;
					if(f){
						maxx=max(maxx,sum);
					}
					if(sum<0){
						sum=0;
						f=0;
					}
				}
			}
		}
	}
	cout<<maxx<<"\n";
}