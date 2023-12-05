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
    int n,inp,q;
    cin>>n>>q;
    vector<int> v,x;
    for(int i=0;i<n;i++){
        cin>>inp;
        v.push_back(inp);
       // if(!(v[i] & 1)){even.push_back(i);}
    }
    for(int i=0;i<q;i++){
        cin>>inp;
        if(x.empty() || x.back()>inp){x.push_back(inp);}
        
    }
    for(int i=0;i<n;i++){
        //int p=1<<x[i];
        for(int &j:x){
            //if((v[j]>=p)&&(v[j]%p==0)){v[j]+=(1<<(x[i]-1));}
            if(v[i]%(1<<j)==0){v[i]|=(1<<(j-1));}
        }
    }
    
    for(int k:v){
        cout<<k<<" ";
    }
    cout<<endl;
}
}