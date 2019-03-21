//UVA10235 Simply Emirp
#include<iostream>
using namespace std;

int main(){
	long inNum,rNum,useNum,pCheck,eCheck,i,j;
	for(;cin>>inNum;){
		rNum=0;
		pCheck=0;
		eCheck=0;
		for(i=2;i<inNum/2+1;i++){
			if(inNum%i == 0) pCheck++;
		}
		if(pCheck!=0){
			cout<<inNum<<" is not prime."<<endl;
		}
		else{
			for(useNum=inNum;useNum>0;useNum/=10){
				rNum=rNum*10+useNum%10;
			}
			for(i=2;i<rNum/2;i++){
				if(rNum%i == 0) eCheck++;
			}
			if(eCheck==0 && inNum!=rNum){
				cout<<inNum<<" is emirp."<<endl;
			}
			else{
				cout<<inNum<<" is prime."<<endl;
			}
		}
	}
	return 0;
}

//存在問題：質數檢查,數字顛倒,顛倒後數字相同 
