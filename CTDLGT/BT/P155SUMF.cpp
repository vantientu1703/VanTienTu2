#include<iostream>
using namespace std;
long long nho=0;
long long kq(int a,int b){
	int c;
	c=a*b-nho;
	nho+=c;
	return c;
}
main(){
	int n,i;
	long long b[100];
	cin>>n;
	
	for(i=1;i<=n;i++){
		cin>>b[i];
		cout<<kq(b[i],i)<<" ";
	}
}
