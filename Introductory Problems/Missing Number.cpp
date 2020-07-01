#include<iostream>
using namespace std;

int main(){
	int n,x;
	cin>>n;
	long long sum=0, required_sum=0;
	int i;
	for( i=0;i<n-1;i++){
		cin>>x;
		sum += x;
		required_sum += (i+1);
	}
	required_sum += i+1;
	cout<<required_sum -sum;

return 0;
}


