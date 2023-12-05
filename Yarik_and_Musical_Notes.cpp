#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
long long t;
cin>>t;
while(t--){
    long long n,inp;
    cin>>n;
    vector<long long> v;
    for(long long i=0;i<n;i++){
        cin>>inp;
        v.push_back(inp);
    }
    long long ans=0;
    map<double,long long> mp;
    for(long long i=n-1;i>=0;i--){
        double key=v[i]-log2(v[i]);
        ans+=mp[key]; 
        
        mp[key]++;
    }
    cout<<ans<<endl;
}
}