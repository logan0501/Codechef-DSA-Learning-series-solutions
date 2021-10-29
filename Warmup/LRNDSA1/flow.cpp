#include<bits/stdc++.h>
using namespace std;
// codechef.com/LRNDSA01/submit/FLOW007
int reverse(int num){
	int rev=0;
	while(num>0){
		int digit=num%10;
		rev=rev*10+digit;
		num/=10;
	}
	return rev;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		cout<<reverse(num)<<endl;
	}
	return 0;
}