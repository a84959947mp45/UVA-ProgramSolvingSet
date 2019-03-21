//UVA10035-PrimaryArithmetic
#include<iostream>
using namespace std;

int main(){
	long in_x,in_y,carry=0,out;
	//in_x為輸入的第一個數,in_y為第二個,carry為前一位進位,out則是輸出
	for(;;){
		in_x=0;
		in_y=0;
		cin>>in_x>>in_y; //輸入 
		if(in_x==0&&in_y==0) break; //若兩數皆為0則跳出迴圈
		carry=0; //清空carry 
		out=0; //清空out 
		for(;in_x!=0||in_y!=0;){ //開始計算,兩數被消至0時跳出 
			if((in_x%10+in_y%10+carry)>=10){ //若要進位 
				out++; //輸出數量+1 
				carry=1; //設定下次進位 
			}
			in_x/=10; //去除尾數 
			in_y/=10;
		} 
		if(out==0)cout<<"No"; //將0轉為No 
		else cout<<out;
		cout<<" carry operation";
		if(out!=0&&out!=1) cout<<"s"; //檢查複數 
		cout<<"."<<endl;
	} 
	return 0; //EOF
}
