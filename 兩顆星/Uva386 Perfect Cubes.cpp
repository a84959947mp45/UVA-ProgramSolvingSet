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
	//1.���i���bcd�䤤�@�ӵ���a 
	//2.���i��䤤��ӼƦr�@�� 
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
					//���|�X�{�T�ӳ��@�� 
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
//1.�Npow(x,3)���N��triple[x]��֫ܦh�ɶ�
// 2.�N��xyz�ƦC�զX�����]��-1�A�b�U���o�{����h�������}
//3.���i�ϥ�java 
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
