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
    long long odd=0,even=0;
    for(int i=0;i<n;i++){
        cin>>inp;
        v.push_back(inp);
        
        if(inp%2!=0) odd++;
    }
    
    if(odd%2==0) {cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;} 
    
}
}