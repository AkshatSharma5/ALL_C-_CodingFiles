#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n, k, l, c, d, p, nl, np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
if(k*l<n*nl || c*d<n || p<np*n) {cout<<0;}
else{
    int ans=min(min(k*l/nl,c*d),p/np)/n;
    cout<<ans;
}


}