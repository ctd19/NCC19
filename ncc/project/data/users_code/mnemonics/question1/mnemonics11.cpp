#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll k,n;
        cin>>k>>n;
        ll a[k];
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        sort(a,a+k);
        
        ll sum=0,cnt=0;
        for(int i=0;i<k;i++)
        {
            if(sum>n)
                break;
            sum+=a[i];
            if(sum<=n)
                cnt++;
        }
        cout<<cnt<<"\n";
    }
return 0;
}