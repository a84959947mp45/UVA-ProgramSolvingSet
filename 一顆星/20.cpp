/*
	UVA10812�GBeat the Spread! 
	�D�ػ����G��JS(����`�M)�MD(��Ƭۮt)�D��ƥi��O�h�֡A�p�G��ƨD���X�h��Ximpossible
	�D�ذ��k�Gx = (S+D)/2  ;  y = (S-D)/2 
			  ��x,y�p��0�άO�������(%2����)�A�h��Ximpossible
			  �Ϥ��A��Xx,y 
*/

#include <iostream>
using namespace std;
int main(){
	int N,S,D,x,y;
	cin>>N;
	while(N>0){
		cin>>S>>D;
		x=S+D;
		y=S-D;
		if(x%2!=0 || x<0 || y%2!=0 || y<0) cout<<"impossible"<<endl;
		else cout<<x/2<<" "<<y/2<<endl;
		N--;
	}
}

