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
    int n,inp,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k%2==0){
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
    else{
        vector<char> odd,even;
        for(int i=0;i<n;i++){
            if(i%2==0){
                even.push_back(s[i]);
            }
            else {odd.push_back(s[i]);}
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(i%2==0){cout<<even[c1++];}
            else{cout<<odd[c2++];}
        }cout<<endl;
    }
}
}