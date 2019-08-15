#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t,k,n,val;
	cin >> t;
	
	while(t--){
	    cin >> k;
	    cin >> n;
	    
	    vector<int> v;
	    
	    for(int i = 0; i < k; i++){
	        cin >> val;
	        v.push_back(val);
	    }
	    
	    sort(v.begin(), v.end());
	    
	    int assignments = 0;
	    int i = 0;
	    while(n >= v[i]){
	        n -= v[i];
	        assignments++;
	        i++;
	    }
	    cout << assignments << "\n";
	}

return 0;
}