#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
long long n,k;
while(t--){
cin>>n>>k;
if((n%2==0)||(n%k==0)){cout<<"YES\n";}
else if((n%2!=0)&&(k%2!=0)){cout<<"YES\n";}
else{
int flag=0;
        if(((n%2)%k)==0){cout<<"YES"<<endl;flag=1;}
        else if(((n%k)%2)==0){cout<<"YES"<<endl;flag=1;}
        
        if(flag==0){cout<<"NO"<<endl;}
}

}

}