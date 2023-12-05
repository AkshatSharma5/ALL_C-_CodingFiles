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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    unordered_map<char,int> mpp;

    for(int i=0;i<n;i++){
        if(mpp.find(s[i])==mpp.end()){
            mpp.insert({s[i],1});
        }
        else{
            mpp[s[i]]++;
        }
    }

    int akele=0;
    for(auto i:mpp){
        akele+=i.second%2;
    }

    if(k==akele || n-k==1 || akele==1){
        cout<<"YES\n";
    }
    else if(akele-k==1){
        cout<<"YES\n";
    }
    else if(akele==0){
        cout<<"YES\n";
    }
    else if(k>akele){
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }



}
}