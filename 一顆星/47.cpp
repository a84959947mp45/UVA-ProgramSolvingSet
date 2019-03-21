/*
	UVA118：Mutant Flatworld Explorers
	
	題目說明：要你設計一個邊緣探測機器人
			  以(0.0)左下角為地圖起始點，第一列輸入地圖右上角的座標
			  接著輸入好幾個CASE
			  	CASE的第一列:輸入機器人的位置及面對方向(NESW)
			  	CASE的第二列:輸入機器人的路線
				  R:向右轉90度
				  L:向左轉90度
				  F:朝面對方向走一步
			  當機器人走出地圖範圍，停止該CASE機器人的動作並輸出他走出範圍前的座標並加上LOST 
			  接著機器人會知道該點的外界位置，在接下來的case會跳過該點的外界並繼續進行動作
	
	題目做法:如下		   
*/

#include <iostream>
#include <string.h>
#include <map> 
using namespace std;

// robot邊緣探測機器人類別 
class robot
{
public:
	// 建構子，輸入地圖邊緣 
	robot(int eX, int eY):edgeX(eX),edgeY(eY){} 
	
	// set變數(x,y:座標 o:面對方向) 
	void setXY(int ix,int iy){
		x=ix;y=iy;
	}
	void setO(char io){
		o=io;
	}
	
	// get變數(edgeX,edgeY 邊緣) 
	int getX(void) const{
		return x;
	}
	int getY(void) const{
		return y;
	}
	char getO(void) const{
		return o;
	}
	int getEdgeX(void) const{
		return edgeX;
	}
	int getEdgeY(void) const{
		return edgeY;
	}
	
	// 控制機器人動作 
	void path(string &s){
		for(int i=0; i<s.length(); i++){
				// 如果機器人走出地圖範圍，停止動作
				if(getHaveLost()) return; 	
				
				// 接收F(行走)，則讓機器人行走		
				else if(s[i]=='F') Fgo(); 
				
				// 接收L(轉左邊90度)，更改面對方向 
				else if(s[i]=='L'){ 
					switch(getO()){
						case 'N':setO('W');break;
						case 'W':setO('S');break;
						case 'S':setO('E');break;
						case 'E':setO('N');break;
					}
				}
				
				// 接收R(轉右邊90度)，更改面對方向
				else if(s[i]=='R'){
					switch(getO()){
						case 'N':setO('E');break;
						case 'E':setO('S');break;
						case 'S':setO('W');break;
						case 'W':setO('N');break;
					}
				}
				
				else continue; 
			}
		} 
	
	// 機器人前進 
	void Fgo(void){
		int tmpX=getX(),tmpY=getY(); // 儲存當下站的位置 
		
		if( m[ getX() ][ getY() ][ getO() ] ) return; // 檢查前進方向是不是邊界，是的話停止前進 
		
		// 朝面對方向前進 
		switch(getO()){
			case 'N':setXY(getX()  ,getY()+1);break;
			case 'E':setXY(getX()+1,getY()  );break;
			case 'W':setXY(getX()-1,getY()  );break;
			case 'S':setXY(getX()  ,getY()-1);break;
		}
		
		// 走出地圖範圍，則儲存前進之前的座標和面對方向並讓haveLost=1; 
		if(getX()>getEdgeX() || getY()>getEdgeY() || getX()<0 || getY()<0) {
			setXY(tmpX,tmpY); // 掉落前座標 
			m[tmpX][tmpY][getO()]=1; // 儲存掉落前的狀態 
			setHaveLost(1); // 機器人已掉落 
		}
	}
	
	// 設定set及取得get機器人有沒有掉落 
	void setHaveLost(bool b){
		haveLost = b;
	}
	bool getHaveLost(void) const{
		return haveLost;
	}
	
private:
	int x,y,edgeX,edgeY;
	char o;
	map<int,map<int,map<char,bool> > >	m; // 邊界探測變數 
	bool haveLost;
};


int main(){
	int edgeX,edgeY,x,y;
	char o;
	string s;
	cin>>edgeX>>edgeY; // 輸入地圖邊界 
	robot r(edgeX,edgeY); // 設定機器人
	
	// 輸入case 
	while(cin>>x>>y>>o,cin>>s){
		r.setHaveLost(0); // 每次case使用新的機器人重新進行動作(掉落歸零) 
		r.setXY(x,y);r.setO(o); // 輸入機器人一開始的狀態 
		r.path(s); // 機器人執行動作 
		if( r.getHaveLost() ) cout<<r.getX()<<" "<<r.getY()<<" "<<r.getO()<<" LOST"<<endl;
		else cout<<r.getX()<<" "<<r.getY()<<" "<<r.getO()<<endl;
	}
}
