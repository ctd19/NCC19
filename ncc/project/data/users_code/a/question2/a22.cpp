#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll a[n];
        ll p = 1,mini = 0;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            mini = max(mini,p * a[i]);
            p = p * k;
        }
        cout << p << "\n";
    }
return 0;
}