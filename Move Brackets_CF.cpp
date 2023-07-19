#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        stack<char>st;
        int res=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')
              st.push(s[i]);
            else{
                if(st.empty())
                    res+=1;
                else
                   st.pop();
            }
        }
        cout<<res<<endl;
    }
}
