#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    ll t,n;
	cin>>t;
	ll max;
	while(t--)
	{
		
		cin>>n>>max;
		ll arr[n],count=0,sum=0,flag=0;
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(ll i=0;i<n;i++){
			if(flag==0&&sum+arr[i]<=max)
			{
				sum+=arr[i];
				count++;
			}
			else
			{
				flag=1;
			}
		}

		cout<<count<<"\n";
	}
return 0;
}