#include<iostream>
using namespace std;

int main(){
	int T=0,n=0,k=0;
	int loss=0;
	cin>>T;
	while(T>0){
		loss=0;
		cin>>n>>k;
		for(int i=0;i<n;i++){
		int a=0;
		cin>>a;
		if(a>k){
			loss+=(a-k);
			}

		}
		cout<<loss<<endl;



		T--;
	}
}