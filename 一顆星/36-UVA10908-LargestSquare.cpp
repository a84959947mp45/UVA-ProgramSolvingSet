//UVA10908 Largest Square
#include<iostream>
using namespace std;

int main(){
	int CASE,inM,inN,inQ,inR,inC,t,i,j,out,q,check;
	char input[101][101];
	cin>>CASE;
	for(t=0;t<CASE;t++){
		cin>>inM>>inN>>inQ;
		cout<<inM<<" "<<inN<<" "<<inQ<<endl;
		for(i=0;i<inM;i++){
			for(j=0;j<inN;j++){
				cin>>input[i][j];
			}
		}
		for(q=0;q<inQ;q++){
			cin>>inR>>inC;
			for(out=1;;out++){
				if(inR-out<0 || inC-out<0 || inR+out>=inM || inC+out>=inN) break;
				check=0;
				for(i=inR-out;i<=inR+out;i++){
					for(j=inC-out;j<=inC+out;j++){
						if(input[i][j] != input[inR][inC]) check++;
					}
				}
				if(check!=0) break;
			}
			cout<<out*2-1<<endl;
		}
	}
	return 0;
}

//存在問題：邊界問題 
