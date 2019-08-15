#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n;
        cin >> n;
        string s;
        cin >> s;
         ll dp[n][26][26];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<26;j++)
            {
                dp[i][j][j]=0;
            }
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<26;j++)
            {
		ll zero = 0;
                dp[i][s[i]-'a'][j]=max(zero,dp[i-1][s[i]-'a'][j]+1);
                ans=max(ans,dp[i][s[i]-'a'][j]);
            }
            for(int j=0;j<26;j++)
            {
		ll zero = 0;
                dp[i][j][s[i]-'a']=max(zero,dp[i][s[i]-'a'][j]-1);
            }
        }
        cout<<ans<<endl;
	return 0;
}	