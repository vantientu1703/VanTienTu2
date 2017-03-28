#include<iostream>
#include<string.h>
using namespace std;
void kq(char a[]){
	int b[1000];
	for(int i=0;i<strlen(a);i++){
		b[i]=a[i]+'0';
	}
	for(int i=0;i<strlen(a);){
		int d=1;
		for(int j=i+1;j<strlen(a);j++){
			if(a[i]==a[j]) d++;
			else break;
		}
		cout<<d<<a[i];
		i+=d;
	}
}
main(){
	char a[1000];
	int n;
	cin>>n;
	while(n--){
		cin>>a;
		kq(a);
		cout<<endl;
	}
}

