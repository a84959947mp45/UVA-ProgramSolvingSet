#include <iostream>
#include <iomanip>

using namespace std;

//計算有沒有被包進去正方形裡面 
void JudgeInSquares(int,int,int);

//要被計算的座標 
int px,py;
//被包圍數量
int T_count; 


int main(){
	
	//正方形大小 
	int k;
	//開始輸入最大正方形的大小k,px、py被計算的座標點 
	while(cin>>k>>px>>py){
		
		if(k==0&&px==0&&py==0){
			break;
		}
		//
		T_count=0;
		JudgeInSquares(k,1024,1024);
		cout<<setw(3)<<T_count<<endl;
		
		
	}
	
	
} 
void JudgeInSquares(int k,int sx,int sy){
      
	  int reK;
	  //下一個附帶的正方形大小 
	  reK = k/2;	
	  
	  if(k==0){
	  	return;
	  }
	  
	  if((sx-k)<=px&&(sx+k)>=px&&(sy+k)>=py&&(sy-k)<=py){
	  	 T_count++;
	  }
	  
	  //產生附帶正方形.去計算大小
	   JudgeInSquares(reK,sx+k,sy+k); 
	   JudgeInSquares(reK,sx+k,sy-k);
	   JudgeInSquares(reK,sx-k,sy+k);
	   JudgeInSquares(reK,sx-k,sy-k);

} 





