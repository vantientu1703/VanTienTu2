#include<iostream>
using namespace std;
int kt(int n,int a[]){
	 int i,j,b[1000]={0},min=1000,max=0;
	for(i=0;i<n;i++){
		if(b[i]==0)
			for(j=i+1;j<n;j++)
				if(a[i]==a[j]){
					b[i]++;
					b[j]=-1;
				}
		if(b[i]>=max) 
			max=b[i];		
	}
	for(i=0;i<n;i++){
		if(b[i]==max)
			if(a[i]<min) min=a[i];
	}
	return min;
}
main(){
	int  n,m,a[1000],b[100];
	do cin>>n;
	while(n<0||n>100);
	for(int i=1;i<=n;i++){
		do cin>>m;
		while (m<0||m>1000);
		for(int j=0;j<m;j++)
			cin>>a[j];
		b[i]=kt(m,a);
	}
	for(int i=1;i<=n;i++)
		cout<<b[i]<<endl;
}
