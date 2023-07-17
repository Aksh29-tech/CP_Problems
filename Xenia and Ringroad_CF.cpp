#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>house(m);
    
    for(int i=0;i<m;i++)
       cin>>house[i];
       
    long long int totalTime=house[0]-1;
    for(int i=1;i<m;i++){
        if(house[i] > house[i-1])
           totalTime=totalTime+(house[i]-house[i-1]);
        else if(house[i] < house[i-1])
           totalTime=totalTime+((n-house[i-1])+house[i]);
    }
    cout<<totalTime<<endl;
    return 0;
}
