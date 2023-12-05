#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,sum=0,ans=0,i;
    cin>>t;
    while(t--){
        sum=0;
        for(i=0;i<3;i++){
            cin>>a;
            sum+=a;
        }
        if (sum>=2){
            ans++;
        }
    }
    cout<<ans;
}