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
    int n1,inp;
    cin>>n1;
    int n=2*n1;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>inp;
        v.push_back(inp);
    }
    sort(v.begin(),v.end());
    int res=0;
    for(int i=0;i<n/2-1;i++){
        res+=v[i+1]-v[i];
    }
    for(int i=n/2;i<n-1;i++){
        res+=v[i+1]-v[i];
    }
    cout<<res<<endl;
    for(int i=0;i<n/2;i++){
        cout<<v[i]<<" "<<v[n-i-1]<<endl;
    }
}
}