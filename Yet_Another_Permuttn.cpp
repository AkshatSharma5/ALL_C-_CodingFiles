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
    int n,inp;
    cin>>n;
    set<int> s;
    for(int i=1;i<=n;i++){
        s.insert(i);
    }
    while(!s.empty()){
        int cur = *s.begin();
        while(cur<=n){
            cout<<cur<<" ";
            s.erase(cur);
            cur*=2;
        }
    }
    cout<<endl;
    /*ANSWER CONCEPTTTT*/
/*
 (1 2 4 8) (3 6) (5 10) 7 9 10

{
1 ka double hai ? => 2 hai (2)  // hcf=1
2 ka double hai ? => 4 hai (2,4) // hcf=2
4 ka double hai ? => 8 hai (2,4,8) // hcf=4
8 ka double hai ? => 16 nhi hai ---> BREAK! 
}

{
(3)
3 ka double hai ? => 6 hai  (3,6)  // hcf=3
6 ka double hai ? => 12 nhi hai  ---> BREAK!
}


*/


    
}
}


/*
WRONG -- 
vector<int> v;

    int ans=n/2;
    int hashh[n+1]={0};
    for(int i=1;i<=ans;i++){
        v.push_back(i);
        hashh[i]=2;
    }
    int lim=ans/2;
    int cnt=0;
    for(int i=ans;i>lim;i--){
        if(i*2<=n && hashh[i]==2){
            v.insert(v.begin()+i,i*2);
            hashh[i]=1;hashh[2*i]=1;
        }
    }
    for(int i=2;i<sizeof(hashh)/sizeof(hashh[0]);i++){
        if(hashh[i]==0) v.push_back(i);
        //cout<<hashh[i]<<" ";
    }
    for(int it:v){cout<<it<<" ";}
    cout<<endl;


*/