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
    long long ones=0,others=0;
    
    for(int i=0;i<n;i++){
        cin>>inp;
        if(inp==1) ones++;
        else {others+=inp-1;}     
    }
    if(n==1) {cout<<"NO\n";continue;}
    if(others>=ones) cout<<"YES\n";
    else cout<<"NO\n";
    


}
}