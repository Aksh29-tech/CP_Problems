#include <bits/stdc++.h>
using namespace std;
int check(char ch1,char ch2){
    if(ch1=='0' && ch2=='0')
	   return 1;
	else if((ch1=='0' && ch2=='1')||(ch1=='1' && ch2=='0'))
	   return 2;
	else if((ch1=='0' && ch2=='2')||(ch1=='2' && ch2=='0'))
	   return 1;
	return 0;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s1,s2;
	    cin>>s1>>s2;
	    
	    int res=0;
	    int previous=0;
	    for(int i=0;i<n;i++){
	       if((s1[i]=='1' && s2[i]=='1') && (s1[i-1]=='0' && s2[i-1]=='0') && i!=0 && previous>=0){
	           res+=2;
	           res=res-previous;
	           previous=-1;
	       }
	       else if((s1[i]=='0' && s2[i]=='0') && (s1[i-1]=='1' && s2[i-1]=='1') && i!=0 && previous>=0){
	           res+=2;
	           res=res-previous;
	           previous=-1;
	       }
	       else{
	           previous=check(s1[i],s2[i]);
	           res+=previous;
	       }
	    } 
	    cout<<res<<endl;
	}
	return 0;
}
