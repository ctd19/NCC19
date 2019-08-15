#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define mk make_pair
#define acc(a,n) for(ll i = 0;i < n;i++) cin >> a[i]
#define ac ll n; cin >> n
#define ve(a,n,x) vector <ll> a(n,x)
#define basic ll n; cin >> n; vector <ll> a(n); for(ll i = 0;i < n;i++) cin >> a[i]
#define f first
#define s second
#define mod 1000000007
#define T ll t; cin >> t; while(t--)
using namespace std;

ll fact[1007];

void nfact(){
    fact[0] = fact[1] = 1;
    for(ll i = 2;i <= 1000;i++){
        fact[i] = (i * fact[i - 1]) % mod;
    }
}

vector <ll> pr(1000007,1);
vector <ll> pri;

void nprime(){
    pr[0] = pr[1] = 0;
    for(ll i = 2;i <= 1000000;i++){
        if(pr[i]){
            pri.pb(i);
            for(ll j = 2 * i;j <= 1000000;j += i){
                pr[i] = 0;
            }
        }
    }
}

ll xpowymodp(ll x,ll y,ll p){
    ll ret = 1;
    while(y > 0){
        if(y % 2)
            ret = (ret * x) % p;
        x = (x * x) % p;
        y /= 2; 
    }
    return ret;
}

ll inverseMod(ll x){
    return xpowymodp(x,mod - 2,mod);
}

ll nCr(ll n,ll r){
    if(n == r) return 1;
    if(n < r) return 0;
    if(r == 1) return n;
    if(r == 0) return 1;
    r = min(r,n - r);
    ll ret = 1;
    for(ll i = 1;i <= r;i++){
        ret = (((ret * n) % mod) * inverseMod(i)) % mod;
        n = n - 1;
    }
    return ret;
}

ll facti(ll n); 
  
ll nCri(ll n, ll r) 
{ 
    return facti(n) / (facti(r) * facti(n - r)); 
} 
  
// Returns factorial of n 
ll facti(ll n) 
{ 
    ll res = 1; 
    for (ll i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    ll n,k;
    cin >> n >> k;
    ll h[n];
    for(int i = 0;i < n;i++){
        cin >> h[i];
    }
    ll p = 1,mini = 0;
    for(int i = 0;i < n;i++){
        mini = max(mini,p * h[i]);
        p = p * k;
    }
    cout << mini << "\n";}
    return 0;    
}