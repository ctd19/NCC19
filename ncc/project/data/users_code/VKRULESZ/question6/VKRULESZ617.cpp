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
	light;
	ll t,i,n,b,j,val;
	cin>>t;
	while(t--){
		cin>>n>>b;
		vector<ll>arr;
		val=1;
		for(i=1;i<=8*b;i++){
			if(i%b==0){
				arr.pb(val);
				continue;
			}
			val=(val*i)%b;
			arr.pb(val);
		}
		// for(i=0;i<arr.size();i++)
		// 	cout<<arr[i]<<" ";
		if(n%(8*b)==0){
			cout<<arr[8*b-1]<<"\n";
		}
		else{
			cout<<arr[(n%(8*b))-1]<<"\n";
		}
	}
}