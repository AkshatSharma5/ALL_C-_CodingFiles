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
    int n,inp,k,mini=INT_MAX,min2=INT_MAX;
    long long s1=0,s2=0;
    cin>>n;
    
    //vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>k;
        int f=INT_MAX,s=INT_MAX; // f stores smallest ele and s stores second smallest ele
        for(int j=0;j<k;j++){
            cin>>inp;
            if(inp<f) {s=f;f=inp;}
            else if(inp<s) {s=inp;}
        }
        mini=min(mini,f);
        min2=min(min2,s);
        //s1+=f;
        s2+=s;
        //v.push_back({s,f});

    }
    if(n==1) {cout<<mini<<endl;continue;}
    cout<<s2-min2+mini<<endl;

}
}