#include<bits/stdc++.h>
using namespace std;
string maxo(string s1,string s2){
    if(s1>=s2) return s1;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    long long n=s.size();
    int f=-1;
    string ans="";
    
    if(s[0]-'0'>=5) {cout<<pow(10,n)<<endl;continue;}
    
    for(int i=n-1;i>0;i--){
        if(s[i]-'0'>=5 && s[i-1]!='9') {
            s=maxo(s,ans);s[i-1]=char(s[i-1]+1);
            for(int j=i;j<=n-1;j++){s[j]='0';}
        }
        else if (s[i]-'0'>=5 && s[i-1]=='9'){
            for(int j=i;j>=0;j--){
                s=maxo(s,ans);
                if(s[j]!='9')
                    {f=max(f,j);}
                }
                s=maxo(s,ans);
                s[f]=char(s[f]+1);
                for(int j=f+1;j<=n-1;j++){s[j]='0';}
        }

    }
    cout<<s<<endl;
    
}
}