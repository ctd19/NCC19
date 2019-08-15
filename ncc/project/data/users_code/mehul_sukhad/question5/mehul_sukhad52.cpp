#include<bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t,n,x,val;
	cin >> t;
	while(t--){
	    cin >> n >> x;
	    vector<int> v;
	    while(n--){
	        cin >> val;
	        v.push_back(val);
	    }
	    
	    sort(v.begin(), v.end());
	    
	    n = v.size();
	    int min = x/n;
        int sum = 0;
        int i;
	    for(i = 0; i < n; i++){
	        if(v[i] > min){
	            break;
	        }
	        sum += v[i];
	    }
	    
	    int newAukat = x - sum;
	    int newDivisor = n - i;
	    if(newDivisor == 0){
	    	cout << min << "\n";
	    }
	    else{
	    	cout << newAukat/newDivisor << "\n";
	    }
	    
	}
    

return 0;
}