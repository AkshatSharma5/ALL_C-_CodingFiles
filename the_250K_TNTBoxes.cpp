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
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>inp;
        v.push_back(inp);
    }
    vector<int> factors;
    vector<long long> answers;
    for(int i=2;i<n;i++){
        if(n%i==0) {factors.push_back(i);}
    }
    answers.push_back(*max_element(v.begin(),v.end())-*min_element(v.begin(),v.end()));
    //cout<<answers[0]<<" -> 1.\n";
    for(auto i:factors){
        long long sum=0,init=0;
        vector<long long> sums;
        while(init<n){
        for(int j=0;j<i;j++){
            sum+=v[init+j];
            //cout<<sum<<" ";
        }
        //cout<<",";
        sums.push_back(sum);
        init+=i;sum=0;}
        // for(auto i:sums){
        //     cout<<i<<" ";
        // }
    answers.push_back(*max_element(sums.begin(),sums.end())-*min_element(sums.begin(),sums.end()));
    sums.clear();

    }
    cout<<*max_element(answers.begin(),answers.end())<<endl;


}
}