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
    long long n,k,inp;
    cin>>n>>k;
    vector<long long> v;
    long long p=1,s=0,countfor4=0,even=0;
    int ff=0;
    for(int i=0;i<n;i++){
        cin>>inp;
        if(4-inp%4==1) countfor4++;
        if(even<2 && inp%2==0) even++;
        if(inp%k==0) ff=1;
        v.push_back(inp);
    }
    //cout<<"*\t";
    if(ff) cout<<0<<endl;
    else if(k==2){
        cout<<1<<endl;
        }
    else if(k==3){
        long long mini=LONG_LONG_MAX;
        for(auto i:v){
            mini=min(mini,3-i%3);
        }
        cout<<mini<<endl;
    }
    else if(k==4){
        if(even==2) cout<<0<<endl;
        else if(even==1 || countfor4!=0) cout<<1<<endl;
        else cout<<2<<endl;
    }
    else{
        long long mini=LONG_LONG_MAX;
        for(auto i:v){
            mini=min(mini,5-i%5);
        }
        cout<<mini<<endl;
    }
}
}