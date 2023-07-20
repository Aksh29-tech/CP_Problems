#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       
       if(n==2)
         cout<<-1<<endl;
       else{
       int var=1;
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               cout<<var<<" ";
               if(var==n*n || var==n*n-1){
                   var=2;
               }
               else
                 var=var+2;
           }
           cout<<endl;
       }
       }
    }
}
