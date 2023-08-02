#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    vector<string>firstLan(m);
    vector<string>secondLan(m);
    
    for(int i=0;i<m;i++){
        cin>>firstLan[i];
        cin>>secondLan[i];
    }
    
    vector<string>text(n);
    for(int i=0;i<n;i++){
        cin>>text[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(text[i]==firstLan[j] || text[i]==secondLan[j]){
                if(firstLan[j].size()<=secondLan[j].size()){
                    cout<<firstLan[j]<<" ";
                }
                else
                   cout<<secondLan[j]<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}
