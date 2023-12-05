#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
int n,inp;
cin>>n;
vector<int> v;
for(int i=0;i<n;i++){
    cin>>inp;
    v.push_back(inp);
}
sort(v.begin(),v.end());
int s=0,e=n-1,cost=0;
while(s<=e){
    cost+=v[e]-v[s];
    s++;e--;
}
cout<<cost<<endl;}

}