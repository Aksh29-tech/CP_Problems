#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin>>s;
   
   int count=0;
   for(int i=0;i<s.size();i++){
       if(count==0 && s[i]=='h')
          count++;
       else if(count==1 && s[i]=='e')
          count++;
       else if((count==2||count==3) && s[i]=='l')
          count++;
       else if(count==4 && s[i]=='o')
          count++;
   }
   if(count==5)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;
}
