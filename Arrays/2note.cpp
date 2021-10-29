#include<bits/stdc++.h>
using namespace std;
#define f(i,z) for(int i=0;i<z;i++)
int main(){
    int t;
    cin>>t;
    f(j,t){
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        int val=x-y;
        int flag=1;
        f(j,n){
            int p,c;
            cin>>p>>c;
           if(val<=p && c<=k){
               cout<<"LuckyChef"<<endl;
               flag=0;
               break;
           }
        }
        if(flag){
            cout<<"UnluckyChef"<<endl;
        }
        
    }
    return 0;
}