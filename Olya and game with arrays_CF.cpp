#include <bits/stdc++.h>
#define ll long long int

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>vp;
        while(n--){
            int m;
            cin>>m;
            vector<int>v(m);
            for(int i=0;i<m;i++)
              cin>>v[i];
            sort(v.begin(),v.end());
            vp.push_back({v[0],v[1]});
        }
        sort(vp.begin(),vp.end());
        int var=vp[0].first;
        sort(vp.begin(),vp.end(), [](const pair<int, int>& lhs, const pair<int, int>& rhs) {
             return lhs.second < rhs.second; } );
        ll res=0;
        int i=0;
        for(auto it: vp){
            if(i==0){
              res+=var;
              i++;
            }
            else
              res+=it.second;
        }
        cout<<res<<endl;
        
    }
}
