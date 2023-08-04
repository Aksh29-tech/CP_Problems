#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	    ll n,m;
	    cin>>n>>m;
	    
	    vector<ll>dormitories(n);
	    for(int i=0;i<n;i++)
	       cin>>dormitories[i];
	    vector<ll>letters(m);
	    for(int i=0;i<m;i++)
	       cin>>letters[i];
	    
	    vector<ll>prefix(n);
	    prefix[0]=dormitories[0];
	    for(int i=1;i<n;i++)
	      prefix[i]=prefix[i-1]+dormitories[i];
	    
	    for(int i=0;i<m;i++){
	        ll letterNo=letters[i];
	        int low=0;
	        int high=n-1;
	        while(low<=high){
	            int mid=(low+high)/2;
	            if(mid==0 && letterNo <= prefix[mid]){
	                cout<<1<<" "<<letterNo<<endl;
	                break;
	            }
	            else if(letterNo <= prefix[mid] && letterNo > prefix[mid-1]){
	                cout<<mid+1<<" "<<letterNo-prefix[mid-1]<<endl;
	                break;
	            }
	            else if(letterNo > prefix[mid])
	               low=mid+1;
	            else
	               high=mid-1;
	        }
	    }
	    
	    return 0;
}
