//UVA11349-Symmetric Matrix �ˬd�蹳�x�} 
#include<iostream> 
#include<string>
#include<cstdio>
using namespace std;

int main(){
	long inM[10000];
	int CASE,inN,i,j,t,outCheck[301]={0};
	
	cin>>CASE;
	for(t=1;t<=CASE;t++){
		cin.ignore(4,'=');
		cin>>inN;
		cin.ignore();
		for(i=0;i<inN*inN;i++){
			cin>>inM[i];
			if(inM[i]<0) outCheck[t]++;
		}
		for(i=0,j=inN*inN-1;i<j;i++,j--){
			if(inM[i]!=inM[j]) outCheck[t]++;
		}
	} 
	for(t=1;t<=CASE;t++){
		if(outCheck[t]==0) cout<<"Test #"<<t<<": Symmetric."<<endl;
		else cout<<"Test #"<<t<<": Non-symmetric."<<endl;
	}
	return 0;
}

//�s�b���D�G"N = " 
