#include <iostream>
#include<math.h>
using namespace std;
int ktnt(unsigned long n){
	if(n < 2) return 0;
	for(long i = 2; i <= sqrt(n); i++)
		if(n % i == 0) return 0;
	return 1;	
}
main() {
	unsigned long n;
	cin>>n;
	if(ktnt(n)) cout<<"YES";
	else cout <<"NO";

	
}
