#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,c;
        cin>>n>>c;
        int sum=0,k;
        for(int j=0;j<n;j++){
            
            cin>>k;
            sum+=k;
        }

        if(sum<=c){
            cout<<"Yes"<<endl;

        }else{
            cout<<"No"<<endl;
        }
    }
}