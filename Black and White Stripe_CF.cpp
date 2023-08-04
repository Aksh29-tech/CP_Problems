#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	 int t;
	 cin>>t;
	 while(t--){
	     int n,k;
	     cin>>n>>k;
	     
	     string s;
	     cin>>s;
	     
	     int first=0;
	     int countBlack=0;
	     int countWhite=0;
	     int second=k-1;
	     for(int i=0;i<k;i++){
	         if(s[i]=='B')
	           countBlack++;
	         else
	           countWhite++;
	     }
	     if(countWhite==0)
	       cout<<0<<endl;
	     else{
	         int minWhite=countWhite;
	         for(int i=k;i<n;i++){
	             if(s[first]=='W')
	               countWhite--;
	             else
	               countBlack--;
	             if(s[i]=='W')
	               countWhite++;
	             else
	               countBlack++;
	             minWhite=min(minWhite,countWhite);
	             first++;
	             
	         }
	         cout<<minWhite<<endl;
	     }
	 }
}
