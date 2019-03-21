//UVA10019-Funny Encryption Method //加密
#include<iostream>
using namespace std;

int main(){
	int CASE,inNum,outX,outY,i,j,useNum;
	cin>>CASE;
	for(i=0;i<CASE;i++){
		outX=1;
		outY=0;
		cin>>inNum;
		for(useNum=inNum;useNum>2;){
			if(useNum%2==1) outX++;
			useNum/=2;
		}
		for(useNum=inNum;useNum>0;){
			switch(useNum%10){
				case 7:
					outY+=3;
					break;
				case 3: case 5: case 6: case 9:
					outY+=2;
					break;
				case 1: case 2: case 4: case 8:
					outY++;
					break;
				case 0: default:
					break;
			}
			useNum/=10;
		}
		cout<<outX<<" "<<outY<<endl;;
	}
}

//存在問題：進位制轉換or直接運算 
