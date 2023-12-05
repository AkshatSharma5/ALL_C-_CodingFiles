#include<bits/stdc++.h>
using namespace std;

int main()
{ ios_base::sync_with_stdio(false);cin.tie(0);
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;++i){cin>>a;v.emplace_back(a);}
    sort(v.begin(),v.end(),greater<int>());
    int c=0,ans=0;
    int sum=0,f=1;
    sum=accumulate(v.begin(),v.end(),sum);
    for(int i=0;i<n;i++){
        c+=v[i];ans++;
        if(c>sum-c){cout<<ans;f=0;break;}
    }if(f==1)cout<<ans;
}