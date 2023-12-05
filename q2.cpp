#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
string t;
cin>>t;
if(t[0]!='9' && t[0]>='5') {int d='9'-t[0];t[0]='0'+d;}
for(int i=1;i<t.size();++i){
    if(t[i]>='5') {int d='9'-t[i];t[i]='0'+d;}
}
cout<<t;


}