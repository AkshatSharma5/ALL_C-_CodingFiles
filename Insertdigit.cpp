#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int t;
string s;
cin>>t;
while(t--){
    int n;
    char k;
    cin>>n>>k;
    cin>>s;
    int flag=0;
    int m;
    for(int i=0;i<n;i++){
        if(k>s[i]) {flag=1;m=i;break;}
        else if(k==s[i]) {m=max(m,i);}
    }
    if(flag!=0) s.insert(s.begin()+m,k);
    cout<<s;
    if (flag==0) cout<<k;
    cout<<endl;
}
/*
765443
10
544
6666
613579
987531
98765443210123456789
773737
210000000
70589590
8281271277321
*/
}