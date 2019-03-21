/*
	UVA10418：Minesweeper
	
	題目說明：踩地雷遊戲，先在第一列輸入兩個數字表示行數列數，
			  接下來在下面輸入地雷( .沒地雷  *地雷 )
			  輸出每個點周圍有幾個地雷  
			  ex: 5 5
			輸入    輸出 
			..*.. 	01*10
			.....	11210
			.*...	1*100
			.....	11100
			..... 	00000   
	
	題目解答：如下 											
*/
#include <iostream>
#include <string.h>
#include <map>
#include <stdio.h> 
using namespace std;

int main(){
	// map<int,map<int,char> > m 二維map陣列，以兩個int為索引值，內容值為char 
	// 用map是因為當引數出界時會回傳0，不用額外做判斷 
	map<int,map<int,char> > m;
	
	int x,y,cas=1,c=0; 
	// 地雷數計算迴圈 (輸入x,y，當x==0 break) 
	while(cin>>x>>y,x){ 
		
		if(c!=0) cout<<endl; // 防止PRESENTATION-ERROR
		
		// 輸入地雷陣列 
		for(int i=0; i<x; i++) for(int j=0; j<y; j++)
			cin>>m[i][j];			
		
		// 輸出case
		// 若該點為地雷，輸出地雷
		// 否則尋找四周地雷數並輸出數量 
		cout<<"Field #"<<cas++<<":"<<endl;		
		for(int i=0; i<x; i++,cout<<endl){
			for(int j=0; j<y; j++){
				if(m[i][j]=='*') cout<<"*";  
				else {  
					#define M(I,J) (m[I][J]=='*') // 用define定義函式可以方便撰寫 
					cout<<M(i-1,j-1)+M(i-1,j  )+M(i-1,j+1)+
						  M(i  ,j-1)+M(i  ,j  )+M(i  ,j+1)+
						  M(i+1,j-1)+M(i+1,j  )+M(i+1,j+1) ;
				}
			}			
		}
		c++; // 防止PRESENTATION-ERROR
	}	
}

