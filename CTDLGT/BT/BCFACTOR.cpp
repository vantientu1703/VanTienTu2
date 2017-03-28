#include<iostream>
#include<math.h>
using namespace std;
int ktnt(int n){
   for (int i=2;i<=sqrt(n);i++)
    if (n%i==0) return 0;
   return 1;
}
main(){
	int n,i;
	cin>>n;
	if(ktnt(n)) cout<<n<<" 1";
	else{
		for(i=2;i<=n;){
			int d=0;
			while(n!=1){
				if(n%i==0){
					d++;n=n/i;	
				}
				else break;
			}
			if(d>0) cout<<i<<" "<<d<<endl;
			i++;
		}
	}
}

