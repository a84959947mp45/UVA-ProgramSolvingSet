//UVA10050 Hartals
#include<iostream>
using namespace std;

int main(){
	int CASE,inN,inP,inH[101],date[4000],i,j,t,out;
	cin>>CASE;
	for(t=0;t<CASE;t++){
		for(i=0;i<4000;i++){
			date[i]=0;
		}
		out=0;
		cin>>inN>>inP;
		for(i=0;i<inP;i++){
			cin>>inH[i];
		}
		for(i=0;i<inP;i++){
			for(j=inH[i];j<=inN;j+=inH[i]){
				date[j]++;
			}
		}
		for(i=1;i<=inN;i++){
			if(date[i]>0 && (i%7)!=6 && (i%7)!=0) out++; 
		}
		cout<<out<<endl;
	}
	return 0;
}

//存在問題：星期五六不計算,最後一日計算 
