#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
ll t;
cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll arr[n];
		for(ll i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		ll i=0,sum=0,count=0;
		while(sum<m && i<n)
		{
			sum+=arr[i];
			i++;
			if(sum>m)
			break;
			count++;
		}
		cout<<count<<"\n";
		
	}
}
