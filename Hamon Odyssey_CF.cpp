#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
           cin>>v[i];
        
        int AND=v[0];
        int group=1;
        for(int i=1;i<n;i++){
            if(AND==0){
                AND=v[i];
                group++;
            }
            else
                AND=AND&v[i];
            if(AND!=0 && i==n-1)
              group--;
        }
        if(group==0)
          cout<<1<<endl;
        else
          cout<<group<<endl;
    }
}
