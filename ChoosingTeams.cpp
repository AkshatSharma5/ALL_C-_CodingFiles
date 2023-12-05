#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,k,inp;
cin>>n>>k;
vector<int> v;
for(int i=0;i<n;i++){
    cin>>inp;
    if(inp+k<=5) v.push_back(inp);
}
cout<<v.size()/3;


}