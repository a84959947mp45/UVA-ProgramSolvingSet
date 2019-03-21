#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>

using namespace std;

void filter(int,int,int);

int digital[201][201][201];
int triple[200];

int main(){
	
	int a,b,c,d;
	int aValue;
	
	memset(digital,0,201*201*201*4);
	
	for(int i =2;i<201;i++){
		triple[i]=pow(i,3);
	}
	//1.不可能比bcd其中一個等於a 
	//2.不可能其中兩個數字一樣 
	for(int a = 2;a<=200;a++){
		for(int b=2;b<a;b++){
			for(int c=2;c<a;c++){
				if(b==c){
					continue;
				}
				for(int d=2;d<a;d++){
					if(b==d||c==d){
						continue;
					}
					//不會出現三個都一樣 
					if(a==b&&b==c){
						continue;
					}
					filter(b,c,d);
					
					if(digital[b][c][d]!=-1){
						
						if(triple[a]==digital[b][c][d]){
							
							printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
							
						}
						
						
					}
					
				}
			}
		}
	}
	
} 
//1.將pow(x,3)取代成triple[x]減少很多時間
// 2.將其xyz排列組合全部設為-1，在下次發現此樹則直接離開
//3.不可使用java 
void filter(int x,int y,int z){
	
	if(digital[x][y][z]==-1){
		return;
	}
	
	digital[x][y][z]=triple[x]+triple[y]+triple[z]; 
	
	digital[x][z][y]=-1;
	digital[y][x][z]=-1;
	digital[y][z][x]=-1;
	digital[z][x][y]=-1;
	digital[z][y][x]=-1;
	
	
}
