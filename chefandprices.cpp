#include<iostream>
using namespace std;

int main(){
	int T=0,n=0,k=0;
	int loss=0;
	cin>>T;
	while(T>0){				// For T number of testcases;
		loss=0;
		cin>>n>>k;			//Take input for number of inputs and K:threshold price;
		for(int i=0;i<n;i++){
		int a=0;
		cin>>a;
		if(a>k){			//Checking if price >K;
			loss+=(a-k);	//If greater than K then add to loss;
			}

		}
		cout<<loss<<endl; //print the total loss for the testcase;



		T--;				//decrement iterator;
	}
}