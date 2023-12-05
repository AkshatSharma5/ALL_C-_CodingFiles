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
    int x,y,k;
    cin>>x>>y>>k;
    if(x>=y){cout<<x<<endl;}
    else{
        int p=y-x;
        if(p<=k){
            cout<<y<<endl;
        }
        else{
            int g=x+k;
            int p=y-g;
            cout<<g+2*p<<endl;
        }
    }
}
}