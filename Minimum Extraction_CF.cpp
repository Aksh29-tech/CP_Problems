#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
           cin>>v[i];
           
        sort(v.begin(),v.end());
        int res=v[0];
        int sum=v[0];
        for(int i=1;i<n;i++){
            v[i]=v[i]-sum;
            res=max(res,v[i]);
            sum+=v[i];
        }
        cout<<res<<endl;
    }
    return 0;
}
