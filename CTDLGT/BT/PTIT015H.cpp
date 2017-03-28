#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
string chuyen(int n){
	string a,b;
	while(n>0){
		a+= (n%10+'0');
		n = n/10;
	}
	for(int i = a.length()-1; i>=0; i--)
		 b += a[i];
	return b;
}
string xoachan(string s){
	string x;
	for(int i=0;i<s.length();i+=2)
		x+=s[i];
	return x;	
}
string xoale(string s){
	string x;
	for(int i=1;i<s.length();i+=2)
		x+=s[i];
	return x;	
}
main(){
	int n;
	long m;
	cin>>n;
	while(n--){
	string a;
	cin>>m;
	for(int i=1;i<=m;i++){
		a+=chuyen(i);
	}
	while(a.length()!=1){ 
		a=xoachan(a);
		if(a.length()!=1)
		a=xoale(a);
	}
	cout<<a<<endl;
	}	
}

