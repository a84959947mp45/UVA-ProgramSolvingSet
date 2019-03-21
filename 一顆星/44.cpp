/*
	UVA10418�GMinesweeper
	
	�D�ػ����G��a�p�C���A���b�Ĥ@�C��J��ӼƦr��ܦ�ƦC�ơA
			  ���U�Ӧb�U����J�a�p( .�S�a�p  *�a�p )
			  ��X�C���I�P�򦳴X�Ӧa�p  
			  ex: 5 5
			��J    ��X 
			..*.. 	01*10
			.....	11210
			.*...	1*100
			.....	11100
			..... 	00000   
	
	�D�ظѵ��G�p�U 											
*/
#include <iostream>
#include <string.h>
#include <map>
#include <stdio.h> 
using namespace std;

int main(){
	// map<int,map<int,char> > m �G��map�}�C�A�H���int�����ޭȡA���e�Ȭ�char 
	// ��map�O�]����޼ƥX�ɮɷ|�^��0�A�����B�~���P�_ 
	map<int,map<int,char> > m;
	
	int x,y,cas=1,c=0; 
	// �a�p�ƭp��j�� (��Jx,y�A��x==0 break) 
	while(cin>>x>>y,x){ 
		
		if(c!=0) cout<<endl; // ����PRESENTATION-ERROR
		
		// ��J�a�p�}�C 
		for(int i=0; i<x; i++) for(int j=0; j<y; j++)
			cin>>m[i][j];			
		
		// ��Xcase
		// �Y���I���a�p�A��X�a�p
		// �_�h�M��|�P�a�p�ƨÿ�X�ƶq 
		cout<<"Field #"<<cas++<<":"<<endl;		
		for(int i=0; i<x; i++,cout<<endl){
			for(int j=0; j<y; j++){
				if(m[i][j]=='*') cout<<"*";  
				else {  
					#define M(I,J) (m[I][J]=='*') // ��define�w�q�禡�i�H��K���g 
					cout<<M(i-1,j-1)+M(i-1,j  )+M(i-1,j+1)+
						  M(i  ,j-1)+M(i  ,j  )+M(i  ,j+1)+
						  M(i+1,j-1)+M(i+1,j  )+M(i+1,j+1) ;
				}
			}			
		}
		c++; // ����PRESENTATION-ERROR
	}	
}

