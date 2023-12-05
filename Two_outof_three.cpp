#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}
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
    unordered_map<int,int> mpp;
    unordered_map<int,vector<int>> m;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>inp;
        v.push_back(inp);
        mpp[inp]++;
        m[inp].push_back(i);
    }
    int k=0,last=0;
    for(auto i:mpp){
        if(i.second>=2) {k++;last=i.first;}

    }
    // for(auto i:mpp){ //debug
    //     cout<<i.first<<"  "<<i.second<<endl;
    // }
    // cout<<"***"<<endl;
    // for(auto i:m){ //debug
    //     cout<<i.first<<"  ";print(i.second);cout<<endl;
    // }
    // cout<<"***"<<endl;
    // cout<<last<<" "<<k<<endl;
        vector<int> b(n,1);
   
    if(n<=3 || k<=1){cout<<-1<<endl;}
    else{  
        for(auto it:m){
            if(((it.second).size()>=2)&&(it.first!=last)){
                for(int i=1;i<(it.second).size();i++){
                    b[it.second[i]]=2;
                    //cout<<"#";
                }

            }
            else if(it.first==last){
                b[(it.second)[0]]=2;
                for(int i=1;i<(it.second).size();i++){
                    b[it.second[i]]=3;
                }
            }

       }  
       for(auto i:b){cout<<i<<" ";}
cout<<endl;
       }



    
    
    
}
 }