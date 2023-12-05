#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--){string n;
cin>>n;
int cnt=0;
for(auto it:n) if(it!='0') cnt++;
cout<<cnt<<"\n";
for(int i=0;i<n.size();i++){
    auto m=(int(n[i]-'0')*pow(10,n.size()-i-1));
    if(m==0) continue;
    cout<<m<<" ";
}cout<<"\n";}
}