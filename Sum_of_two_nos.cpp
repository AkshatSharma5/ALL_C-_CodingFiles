#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n,ncpy;
    cin>>n;ncpy=n;
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<"\n";
    }else{
        string s=to_string(n);
        int f=1;
        string s1="",s2="";
        for(int i=0;i<s.size();i++){
            int dig=(s[i]-'0');
            if(dig%2==0){
                s1+=to_string(dig/2);
                s2+=to_string(dig/2);
            }
            else{

                if(f){
                    s1+=to_string(dig/2);
                    s2+=to_string((dig/2)+1);
                    f=0;
                }else{
                    s2+=to_string(dig/2);
                    s1+=to_string((dig/2)+1);
                    f=1;
                }
             }

            }
            cout<<stoi(s1)<<" "<<stoi(s2)<<endl;

    }
}
}