#include <bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define hehe 10000005
using namespace std;
ll fact[hehe];
ll xyp(ll x,ll y,ll mod){
    if(y == 0) return 1;
    if(y == 1) return x;
    if(y % 2){
        ll p = xyp(x,y - 1,mod);
        return (x * p) % mod;
    }
    ll p = xyp(x,y / 2,mod);
    return (p * p) % mod;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        fact[0] = 1;
        for(int i = 1;i < b;i++){
            fact[i] = (i * fact[i - 1]) % b;
        }
        ll answer = 1;
        ll sum = 0;
        while(a > 0){
            sum = (sum + a / b) % (b - 1);
            ll d = a % b;
            answer = (answer * fact[d]) % b;
            a = a / b;
        }
        answer = (answer * xyp(fact[b - 1],sum,b)) % b;
        cout << answer % b << "\n";
    }
    return 0;
}