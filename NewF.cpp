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
    int n,inp;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>inp;
        v.push_back(inp);
    }
    if(n<=2){cout<<"YES\n";}
    else{
    int f=1;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1] && (ceil(log2(i+1)) != floor(log2(i+1)))){f=0;break;}
    }
    if(f){cout<<"YES\n";}
    else{cout<<"NO\n";}
    }
}
}