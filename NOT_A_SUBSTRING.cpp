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
    string s;
    cin>>s;
    int n=s.size();
    if(s=="()") {cout<<"NO\n";continue;}
    
        cout<<"YES\n";
        int f1=0,f2=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==')' && s[i+1]=='(') {f1=1;break;}
        }
        
        if(f1){
            for(int I=0;I<n;I++){
                cout<<"(";
            }
            for(int I=0;I<n;I++){
                cout<<")";
            }
            cout<<endl;
        }
        else {
            for(int i=0;i<n;i++){
                cout<<"("<<")";
            }
            cout<<endl;
        }
        
    // for(int i=0;i<n/2;i++){
    //     if(s[i]==')') p++;
    //     else q++;
    // }
    // if((p==n/2) || (q==n/2)){
    //     for(int i=0;i<n;i++){
    //         cout<<"()";
    //     }
    //     cout<<endl;continue;
    // }
    // else{
    //     for(int i=0;i<n;i++){
    //         cout<<"(";
    //     }
    //     for(int i=0;i<n;i++){
    //         cout<<")";
    //     } 
    //     cout<<endl;
    // }

   

}
}