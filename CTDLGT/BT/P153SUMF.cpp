#include<iostream>
using namespace std;
main (){
	int n,i,a[25]={0},kt=1; char s;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>s;
		if('A'<=s&&s<='Z') a[s-65]++;
		else if('a'<=s&&s<='z') a[s-97]++;
		else continue;
	}
	for(i=0;i<=25;i++){
		
		if(a[i]==0){
			kt=0; break;
		} 
	}
	if(kt==1) cout<<"YES";
	else cout<<"NO"; 
}
