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
    int n,b;
    cin>>n;
    
    cin>>b;

    int sum=b,maxi=sum;

    int prev_par=abs(b)%2;

    for(int i=1;i<n;i++){
        cin>>b;
        if((abs(b)%2)!=(prev_par)){
            sum+=b;
        }
        else{
            sum=b;    // NOT! sum=0; https://bit.ly/utubeLink
        }

        if(b>sum) sum=b;  // for -ve nos.

        maxi=max(maxi,sum);
        prev_par=abs(b)%2;
    }

cout<<maxi<<endl;
    
    

}
}





/*

else if(!f){
        int mx=INT_MIN;
        for(int i=0;i<n-1;i++){
            if((b%2)!=(v[i+1]%2)){
                mx=max(mx,b+v[i+1]);
            }
        }
        cout<<mx<<endl;continue;
    }
    int s=0,e=1;
    int mx=INT_MIN,sum=0;
  for(int i=0;i<n;i++){
    s=i;e=i+1;sum=v[s];
    //cout<<"\n***\n";
    while(e<n){  
        if(abs(v[s]%2)!=abs(v[e]%2)) {
            sum+=v[e];
        //    cout<<"\nSum: "<<sum;
        //    cout<<"\ts: "<<s<<" , e: "<<e<<endl;
            e++;s++;
            mx=max(mx,sum);
            }
        else if((abs(v[s]%2)==abs(v[e]%2))||(e==n-1)){
            sum=0;
            while((e<n)&&(abs(v[s]%2)==abs(v[e]%2))){
                s++;e++;
               // cout<<"#";
                }
                if((abs(v[s]%2)!=abs(v[e]%2))) sum=v[s];
            }

    }
  }
    cout<<max(mx,*max_element(v.begin(),v.end()))<<endl;

*/