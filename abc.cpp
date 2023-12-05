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
    int n,inp,sum=0;
    cin>>n;
    vector<int> v,vv;
    for(int i=0;i<n;i++){
        cin>>inp;
        sum+=inp;
        v.push_back(inp);
    }
    
    if(sum%n!=0){cout<<"\n1"<<endl;}

    else{
        sort(v.begin(),v.end());
        int p=sum/n,f=1,temp=0;
        for(int i=0;i<n;i++){
            vv.push_back(p-v[i]);
            temp+=(p-v[i]);
            if(abs(p-v[i])%2!=0){f=0;break;}
        }
        if(f==0){cout<<"NO\n";}
        else if(temp!=0){cout<<"NO\n";}

        else{
            cout<<"YES\n";

        }

    }

}
}