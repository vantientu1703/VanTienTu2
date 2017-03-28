#include<iostream>

using namespace std;
int n, k, x[100], ok = 1;
void result(){
	for(int i = 1; i<= k; i++)
		cout<< x[i]<<" ";
	cout<<endl;	
}
void next(){
	int i = k;
	while(i > 0 && x[i] == n + i - k)
		i--;
	if(i > 0){
		x[i]++;
		for(int j = i + 1; j<= k; j++)
			x[j] = x[i] + j - i;
	}	
	else ok = 0;
}
main(){
	cin>> n>> k;
	for(int i = 1; i <= k; i++)
		x[i] = i;
	while(ok){
		result();
		next();
	}
}

