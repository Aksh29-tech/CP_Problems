#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        
        string t1=s1;
        string t2=s2;
        
        while(t1.size()!=t2.size()){
            if(t1.size()<t2.size())
              t1+=s1;
            else
              t2+=s2;
        }
        if(t1==t2)
          cout<<t1<<endl;
        else
          cout<<-1<<endl;
    }
    return 0;
}
