#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int t;
cin>>t;
while(t--){
    long long num;
    cin>>num;
    long long h=num/2+2;
    if(num<=2){
        for(int j=1;j<=num;++j){
            cout<<j;
            cout<<" ";
        }
    }
    else{
        for(int k=1;k<h;++k){
            if(k!=2){
                cout<<k+1;
                cout<<" ";
            }
        }
        cout<<1;
        cout<<" ";
        for(int j=h;j<num;++j){
            if(j!=2){
                cout<<j+1;
                cout<<" ";
            }
        }
        if(num>=3) {cout<<3;}
    }
    cout<<"\n";
}
}