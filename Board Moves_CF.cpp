#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       long long res=0;
       for(int i=1;i<=n/2;i++){
           res+=i*1ll*i;
       }
       cout<<res*8<<endl;
    }
}
