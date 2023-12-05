#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
int reverser=1;
cin>>n>>m;
for(int i=1;i<=n;++i){
    if(i%2!=0){
        for(int j=1;j<=m;j++){ cout<<"#"; }
    cout<<endl;}
    else if(i%2==0 && reverser==1){
        for(int j=1;j<=m-1;++j){cout<<".";}
        cout<<"#"<<endl;reverser*=-1;
    }
    else if(i%2==0 && reverser==-1){
        cout<<"#";
        for(int j=1;j<=m-1;++j){cout<<".";}
        reverser*=-1;cout<<endl;
    }
}
}