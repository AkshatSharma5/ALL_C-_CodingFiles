#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,inp;
cin>>n;
map<int,int> mpp;

for(int i=1;i<=n;i++){
    cin>>inp;
    mpp[inp]=i;
}
for(auto it:mpp){
    cout<<it.second<<" ";
}
}