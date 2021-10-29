#include<bits/stdc++.h>
using namespace std;
// https://www.codechef.com/LRNDSA01/submit/LAPIN

string lapin(string str){

		int first[26]={0};
		for(int i=0;i<str.length()/2;i++){
			first[str[i]-'a']++;
		}
		for(int i=(str.length()+1)/2;i<str.length();i++){
			first[str[i]-'a']--;
		}
		for(int i=0;i<26;i++){
			if(first[i]!=0)return "NO";
		}
		return "YES";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<lapin(str)<<endl;
	}
	return 0;
}