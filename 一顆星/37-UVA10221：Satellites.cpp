//37-UVA10221：Satellites 
//題目:兩衛星在同一軌道，給s,a及a的單位，s是地表到衛星的距離，a為角度，後面是角度單位(1min=deg) 
//     求兩衛星距離及軌道弧長。
//難題:若角度超過180需要用360來扣，才是劣弧的弧長跟弦長
//     cmath標頭黨內 sqrt,cos,acos都是很好用的函數 
//     此題需要使用餘弦定理 

#include <iostream>
#include <string>
#include <cmath>  // sqrt,cos,acos
#include <iomanip>

using namespace std;


#define r 6440         //地球半徑 
#define  PI acos(-1.0) //cos反函數 acos(-1.0)為3.1415926，注意需用1.0不可使用1，不然會編譯錯誤 
int main(){
  
  double x,y;
  double R;
  
  //輸入 
  while(cin>>x>>y){
    
    string str;
    double arc,chord;
    
    R=x+r;           //衛星到地心的距離 
    cin>>str;     
    if(y>180){
	  y=360-y;
	}
	//檢查角度的單位 
    if(str=="min"){
      y/=60;
    }
    
    
    arc=2*R*PI*y/360;       //弧長公式 
    chord=sqrt(2*R*R*(1-cos(y/180*PI))); //餘弦定理 
    
    //顯示到小數點後六位 
    cout<<fixed<<setprecision(6)<<arc<<" "<<chord<<endl;
  
  
  }



}
