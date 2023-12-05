#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<string> s;
vector<int> maxx(m,0);
int best=0;
string inp,papa="";
for(int i=0;i<n;i++){
    cin>>inp;
    s.push_back(inp);
    papa+=inp;
}
for(int i=0;i<m;i++){
for(int j=i;j<n*m;j=j+m){
    maxx[i]=max(maxx[i],int(papa[j]-'0'));
}}


int flag;
for(int i=0;i<n;i++){
    flag=0;
    for(int j=0;j<m;j++){
        if((flag==0)&&(int(s[i][j]-'0')==maxx[j])){best++;flag=1;}
    }
}
cout<<best;
}