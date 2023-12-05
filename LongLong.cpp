#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,n,inp;
cin>>t;
vector<int> v;
while(t--){
    int cntr=0,flag=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>inp;
        v.push_back(inp);
    }
    int s=0,e=1;
    for(int i=0;i<n;i++){
        if((v[s]<=0)&&(v[e]<=0)){
            e++;
        }
        
    }
}
}
