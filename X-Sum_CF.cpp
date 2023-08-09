#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        
        vector<vector<int>>v(m,vector<int>(n));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>v[i][j];
            
        int res=INT_MIN;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x=i;
                int y=j;
                int sum=0;
                while(x<m && y<n){
                    sum+=v[x][y];
                    x++;
                    y++;
                }
                x=i;
                y=j;
                while(x>=0 && y>=0){
                    if(x==0 || y==0)
                       break;
                    x--;
                    y--;
                    sum+=v[x][y];
                }
                x=i;
                y=j;
                while(x>=0 && y<n){
                    if(x==0 || y==n-1)
                      break;
                    x--;
                    y++;
                    sum+=v[x][y];
                }
                x=i;
                y=j;
                while(x<m && y>=0){
                    if(x==m-1 || y==0)
                      break;
                    x++;
                    y--;
                    sum+=v[x][y];
                }
                res=max(res,sum);
            }
        }
        cout<<res<<endl;
    }
}
