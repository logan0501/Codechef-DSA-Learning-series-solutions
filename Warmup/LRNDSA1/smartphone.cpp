#include<bits/stdc++.h>
// https://www.codechef.com/LRNDSA01/submit/ZCO14003
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long arr[n];
	for(long long i=0;i<n;i++){
			cin>>arr[i];
}
sort(arr,arr+n);
long long price=0;
for(long long i=0;i<n;i++){
	price=max(price,(n-i)*arr[i]);
}

cout<<price<<endl;
	return 0;
}