//UVA10038 Jolly Jumpers
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int i,inN,inNum[3000]={0},jump[3000]={0},diff,check;
	
	for(;cin>>inN && inN;){
		for(i=0;i<inN;i++){
			inNum[i]=0;
			jump[i]=0;
		}
		check=0;
		for(i=0;i<inN;i++){
			cin>>inNum[i];
		}
		if(inN==1){
			cout<<"Jolly"<<endl;
		}
		else{
			for(i=1;i<inN;i++){
				diff=abs(inNum[i]-inNum[i-1]);
				jump[diff]++;
			}
			for(i=1;i<inN;i++){
				if(jump[i]!=1) check++;
			}
			if(check==0) cout<<"Jolly"<<endl;
			else cout<<"Not jolly"<<endl;
		}
	}
}

//存在問題：絕對值,N=1 
