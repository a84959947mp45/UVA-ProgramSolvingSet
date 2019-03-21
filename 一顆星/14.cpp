/*
	11_UVA12019_Doom's Day Algorithm
	題目說明:輸入幾月幾日，算出2011年該月該日為星期幾
	題目作法:(輸入日期的總天數-1) % 7 即可求出 
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	int N,a,b,m[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	//					1/1			1/2		1/3		1/4			1/5			1/6			1/7
	string week[7] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday",};
	
	cin>>N;
	while(N>0){
		int count=0; // 算輸入日期的總天數 
		cin>>a>>b;
		for(int i=1; i<=a; i++){
			if(i==a) count += b; //	月相同，則加日天數 
			else count += m[i];	 // 月不同，加月天數 
		}
		cout<<week[(count-1)%7]<<endl; //	1/1 Sat為基準點，要減一天 
		N--;
	}
}

