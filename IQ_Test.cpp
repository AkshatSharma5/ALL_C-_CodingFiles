#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,inp;
cin>>n;
int even=0,odd=0;
vector<int> v1,v2,v;
for(int i=0;i<n;i++){
    cin>>inp;
    if(inp%2==0){even++;v1.push_back(inp);v.push_back(inp);}
    else {odd++;v2.push_back(inp);v.push_back(inp);}
}
if(even>odd){int i=0;
for(int t:v){
    i++;
    if(t==v2[0]) {cout<<i;break;}
}
}
else{int i=0;
for(int t:v){
    i++;
    if(t==v1[0]) {cout<<i;break;}
}
}
}