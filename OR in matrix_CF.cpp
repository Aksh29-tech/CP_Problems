#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int m,n;
    cin>>m>>n;
    
    int b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    
    vector<vector<int>>a(m,vector<int>(n,1));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(b[i][j]==0){
                for(int row=0;row<m;row++)
                    a[row][j]=0;
                for(int column=0;column<n;column++)
                    a[i][column]=0;
            }
        }
    }
    vector<vector<int>>B(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==1){
                for(int row=0;row<m;row++)
                    B[row][j]=1;
                for(int column=0;column<n;column++)
                    B[i][column]=1;
            }
        }
    }
    bool check=true;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(b[i][j]!=B[i][j]){
                check=false;
                break;
            }
        }
        if(!check)
          break;
    }
    if(!check)
      cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}