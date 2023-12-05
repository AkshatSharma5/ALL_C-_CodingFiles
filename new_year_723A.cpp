#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
vector<int> v(3,0);
for(int i=1;i<=3;++i) cin>>v[i-1];
sort(v.begin(),v.end());
cout<<v[1]-v[0]+v[2]-v[1];
}