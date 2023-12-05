#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,inp,cnt=1;
cin>>n;
vector<int> a,b,c;
for(int i=0;i<n;i++){
    cin>>inp;
    if(inp==1) { a.push_back(cnt); }
    else if(inp==2) { b.push_back(cnt); }
    else { c.push_back(cnt); }
    cnt++;
}
int mini=min(c.size(),min(a.size(),b.size()));
cout<<mini<<"\n";

for(int i=0;i<mini;i++){
    cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
}

}