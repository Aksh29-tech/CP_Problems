#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    vector<int>v(n);
	    for(int i=0;i<n;i++)
	        cin>>v[i];
	    sort(v.begin(),v.end());
	
	    int cnt=1;
	    int res=1;
	    for(int i=1;i<n;i++){
	        if(v[i]-v[i-1] <= k){
	            cnt++;
	            res=max(res,cnt);
	        }
	        else
	          cnt=1;
	    }
	    cout<<n-res<<endl;
	   
	}
	return 0;
}
