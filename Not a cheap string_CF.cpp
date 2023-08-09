#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int p;
        cin>>p;
        
        int n=s.size();
        int value=0;
        for(int i=0;i<n;i++)
          value+=(s[i]-96);
        
        if(value<=p)
            cout<<s<<endl;
        else{
            string temp=s;
            sort(temp.begin(),temp.end());
            int i=n-1;
            string res="";
            while(i>=0){
                value-=(temp[i]-96);
                if(value<=p)
                  break;
                i--;
            }
            if(i<0)
             cout<<res<<endl;
            else{
                map<char,int>mp;
                for(int j=0;j<i;j++){
                    mp[temp[j]]++;
                }
                for(int i=0;i<n;i++){
                    if(mp.find(s[i])!=mp.end() && mp[s[i]]!=0){
                        res+=s[i];
                        mp[s[i]]--;
                    }
                }
                cout<<res<<endl;
            }
        }
    }
}
