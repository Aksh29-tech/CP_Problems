#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       
       bool check=false;
       if(k==1){
          cout<<"YES"<<endl;
          check=true;
       }
       else if(n%2!=0)
          cout<<"NO"<<endl;
       else{
           cout<<"YES"<<endl;
           check=true;
       }
       if(check){
           int var=1;
           for(int i=0;i<n;i++){
               for(int j=0;j<k;j++){
                   cout<<var<<" ";
                   var+=2;
               }
               cout<<endl;
               if(var > n*k)
                 var=2;
           }
       }
       
    }
}
