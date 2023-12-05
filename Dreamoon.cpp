#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin>>n>>m;
if(n<m){cout<<-1;}
else{
int flag=0;
vector<int> v(n/2,2);
if(n%2!=0){
   v.push_back(1);
int i=v.size()-1;
if(v.size()%m==0){
        cout<<v.size();flag=1;
    }
else{while(v.size()!=n){
    i--;
    auto it=v.begin()+i;
    v.erase(it);
    v.emplace_back(1);
    v.emplace_back(1);
    if(v.size()%m==0){
        cout<<v.size();flag=1;break;
    }
    }}
    if(flag==0) { cout<<-1; }
}
if(n%2==0){
    vector<int> cpy(v);int i=v.size();
     if(v.size()%m==0){
        cout<<v.size();flag=1;
    }else
    {while(v.size()!=n){
    i--;
    auto it=v.begin()+i;
    v.erase(it);
    v.emplace_back(1);
    v.emplace_back(1);
    if(v.size()%m==0){
        cout<<v.size();flag=1;break;
    }

    }}
    if(flag==0) { cout<<-1; }
}
}

}