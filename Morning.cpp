#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--){
   string s;
   cin>>s;
   int ans=0,tar1,tar2;
   if(s[0]-'0'==0){ans=10;}
   else{ans=s[0]-'0';}
   for(int i=1;i<4;i++){
    int dig1=s[i]-'0';
    int dig2=s[i-1]-'0';
    tar1=dig1;
    tar2=dig2;
    if(dig1==0) tar1=10;
    if(dig2==0) tar2=10;
    //cout<<tar1<<" "<<tar2<<" "<<ans<<endl;
    ans+=abs((tar1)-(tar2))+1;

   }
   cout<<ans<<endl;
}
}