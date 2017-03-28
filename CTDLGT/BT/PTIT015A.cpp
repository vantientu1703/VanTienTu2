#include<iostream>
#include<string.h>
using namespace std;
int x[300];
void kq(int x[],int n){
	for(int i=1;i<=n-1;i++)
		for(int j=i+1;j<=n;j++)
			if(x[i]<x[j]){
				int t=x[i]; x[i]=x[j];x[j]=t;
			}
}
void  khoitao(char a[],int x[],int &j){
	for(int i=0;i<strlen(a);i++){
		x[j]=a[i]-'0'; j++;
	}	
}
main(){
	int i,k;
	char a[100],b[100],c[100];
	cin>>k;
	for(int i=1;i<=k;i++){
		int j=1;
		cin>>a>>b>>c;
		khoitao(a,x,j);
		khoitao(b,x,j);
		khoitao(c,x,j);
		j=strlen(a)+strlen(b)+strlen(c);
		kq(x,j);
		for(int k=1;k<=j;k++)
			cout<<x[k];
		cout<<endl;	
	}
	
}

