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
    int a,b,c;
    cin>>a>>b>>c;
    int h=c/2;
    if(c%2==0){
        if(a+h>b+h) cout<<"First\n";
        else cout<<"Second\n";
    }else{
        if(a+h+1>b+h) cout<<"First\n";
        else cout<<"Second\n";
    }
}
}