#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int t,n,k,val;
    cin >> t;
    while(t--){
        cin >> n >> k;
        
        vector <long long> v;
        while(n--){
            cin >> val;
            v.push_back(val);
        }
        
        n = v.size();
        int max = v[0];
        for(int i = 1; i < n; i++){
            v[i] = v[i] * (int)pow(k,i);
            if(v[i] > max){
                max = v[i];
            }
        }
        cout << max << "\n";
    }

return 0;
}