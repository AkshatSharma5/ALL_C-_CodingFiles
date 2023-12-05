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
    int n,inp,mini=INT_MAX,c1=0,c2=0;
    cin>>n;

    vector<int> v,b,c;

    for(int i=0;i<n;i++){
        cin>>inp;
        v.push_back(inp);
        mini=min(mini,inp);
    }
    
    for(int i=0;i<n;i++){
        if(v[i]!=mini) {c.push_back(v[i]);c2++;}
        else {b.push_back(mini);c1++;}
    }

    if(c1==0 || c2==0) {cout<<-1<<endl;continue;}
    else {
        cout<<b.size()<<endl<<c.size()<<endl;
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }cout<<endl;
        for(int i=0;i<c.size();i++){
            cout<<c[i]<<" ";
        }cout<<endl;

    }

}
}