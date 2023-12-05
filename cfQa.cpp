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

    vector<int> v,c;

    for(int i=0;i<n;i++){
        cin>>inp;
        v.push_back(inp);
    }
    
    int m=*max_element(v.begin(),v.end());
    int s=INT_MIN;
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]) {c.push_back(v[i]);c.push_back(v[i-1]);}
    }
    if(c.size()==0) {cout<<0<<endl;}
    else {cout<<*max_element(c.begin(),c.end())<<endl;}


}
}