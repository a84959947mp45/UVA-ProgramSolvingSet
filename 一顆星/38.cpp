/*
	UVA10642：Can You Solve It?
	題目說明：(***y為橫軸，x為縱軸***) 輸入start的x,y軸，以及final的x,y軸，求經過多少了點(包含終點)，路線規則為往左上方走，走到頂後從下一個y軸開始走
			  ex: (0,0) => (0,1) => (1,0) => (0,2)
	題目做法：下面
*/
#include <iostream>
using namespace std;

// 座標軸struct 
struct crd{
	int x,y;
}start,final;

int main(){
	int cas;
	cin>>cas;
	for(int i=1; i<=cas; i++){
		int count=0; // 計算經過的點的數量 
		cin>>start.x>>start.y>>final.x>>final.y; //輸入起始點和終點的 xy軸 
		
		// 求經過點迴圈 (a為第幾條斜線) 
		for(int a=start.x+start.y; !(start.x==final.x && start.y==final.y);){
			if(start.y==0) {start.y=(++a); start.x=0; count++;} // 碰到左上角，start.y變成 ++a，start.x變成0 
			else {start.y--; start.x++; count++;} // 除此之外 start.x++; start.y--; count++;	
		}
		cout<<"Case "<<i<<": "<<count<<endl;	
	}
}
