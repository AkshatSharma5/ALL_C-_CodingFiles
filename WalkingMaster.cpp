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
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if((d-c)>=(b-a)) {
        long long ans=0;
    long long diffy=d-b;
    ans+=diffy;
    a=a+diffy;
    long long diffx=a-c;
    ans+=diffx;
    if((diffy<0) || (diffx<0) ) cout<<-1<<endl;
    else cout<<ans<<endl;
    }
    else {cout<<-1<<"\n";}
}
}