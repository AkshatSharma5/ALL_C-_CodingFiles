#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,d;
int a,sum=0;
cin>>n>>d;
int m,jokes=0;
for(int i=0;i<n;i++){
    cin>>a;
    sum+=a;
}

int sumtot=sum+(n-1)*10;

if(sumtot>d){cout<<-1;}
else{cout<<(d-sum)/5;}

}