#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    map<string,int>mp;
	    bool check=false;
	    for(int i=0;i<n-1;i++){
	        string str;
	        str+=s[i];
	        str+=s[i+1];
	        if(mp.find(str)!=mp.end() && i!=mp[str]){
	            cout<<"YES"<<endl;
	            check=true;
	            break;
	        }
	        if(mp.find(str)==mp.end())
	           mp[str]=i+1;
	    }
	    if(!check)
	      cout<<"NO"<<endl;
	   
	}
	return 0;
}
