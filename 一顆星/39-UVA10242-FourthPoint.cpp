//UVA10242-Fourth Point!!
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double x1,x2,x3,x4,y1,y2,y3,y4; //分別代表輸入的X和Y
	x1=0;x2=0;x3=0;x4=0;y1=0;y2=0;y3=0;y4=0;
	for(;cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;){	//輸入 
		if(x1==0&&x2==0&&x3==0&&x4==0&&y1==0&&y2==0&&y3==0&&y4==0) break;  //若未進行輸入(維持0)便跳出迴圈 
		cout<<fixed<<setprecision(3); //設定小數點後的印出位數 
		if(x1==x2 && y1==y2) cout<<x3+x4-x1<<" "<<y3+y4-y1<<endl; //檢查哪兩個點重複輸入
		//輸出結果為為重複的兩個點相加並減去重複的點 
		else if(x1==x3 && y1==y3) cout<<x2+x4-x1<<" "<<y2+y4-y1<<endl;
		else if(x1==x4 && y1==y4) cout<<x2+x3-x1<<" "<<y2+y3-y1<<endl;
		else if(x2==x3 && y2==y3) cout<<x1+x4-x2<<" "<<y1+y4-y2<<endl;
		else if(x2==x4 && y2==y4) cout<<x1+x3-x2<<" "<<y1+y3-y2<<endl;
		else if(x3==x4 && y3==y4) cout<<x3+x4-x1<<" "<<y3+y4-y1<<endl;
		x1=0;x2=0;x3=0;x4=0;y1=0;y2=0;y3=0;y4=0; //清空 
	} 
	return 0;
} 
