#include<iostream>
using namespace std;

int main(){
 int n;
 cin>>n;
 int first, second;
 cin>>first;
 long long steps = 0;
 while(--n>0){
 	cin>>second;
 	if(first>second)
 		steps += first-second;
 	else
 		first = second;
 }
 	cout<< steps;
return 0;
}


