#include<bits/stdc++.h>
using namespace std;

int main(){
       int n;
       cin>>n;
       
       vector<int>v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       }
       sort(v.begin(),v.end());
       bool check=false;
       for(int i=0;i<n-2;i++){
           int a=v[i];
           int b=v[i+1];
           int c=v[i+2];
           
           if((a+b>c) && (b+c>a) && (a+c>b)){
               check=true;
               break;
           }
       }
       if(check)
         cout<<"YES"<<endl;
       else
         cout<<"NO"<<endl;
    return 0;
}
