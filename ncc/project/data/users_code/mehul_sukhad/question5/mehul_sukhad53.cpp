#include<bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	long long t,n,x,val;
	cin >> t;
	while(t--){
	    cin >> n >> x;
	    vector<long long> v;
	    while(n--){
	        cin >> val;
	        v.push_back(val);
	    }
	    
	    sort(v.begin(), v.end());
	    
	    n = v.size();


	    long long min = x/n;
        long long sum = 0;
        for(int i = 0; i < n; i++){
        	sum += v[i];
        }
        if(sum <= x){
        	cout << 1000000000 << "\n";
        	continue;
        }
        long long i;
	    for(i = 0; i < n; i++){
	        if(v[i] > min){
	            break;
	        }
	        sum += v[i];
	    }
	    
	    long long newAukat = x - sum;
	    long long newDivisor = n - i;
	    if(newDivisor == 0){
	    	cout << min << "\n";
	    }
	    else{
	    	cout << newAukat/newDivisor << "\n";
	    }
	    
	}
    

return 0;
}