//UVA10242-Fourth Point!!
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double x1,x2,x3,x4,y1,y2,y3,y4; //���O�N���J��X�MY
	x1=0;x2=0;x3=0;x4=0;y1=0;y2=0;y3=0;y4=0;
	for(;cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;){	//��J 
		if(x1==0&&x2==0&&x3==0&&x4==0&&y1==0&&y2==0&&y3==0&&y4==0) break;  //�Y���i���J(����0)�K���X�j�� 
		cout<<fixed<<setprecision(3); //�]�w�p���I�᪺�L�X��� 
		if(x1==x2 && y1==y2) cout<<x3+x4-x1<<" "<<y3+y4-y1<<endl; //�ˬd������I���ƿ�J
		//��X���G�������ƪ�����I�ۥ[�ô�h���ƪ��I 
		else if(x1==x3 && y1==y3) cout<<x2+x4-x1<<" "<<y2+y4-y1<<endl;
		else if(x1==x4 && y1==y4) cout<<x2+x3-x1<<" "<<y2+y3-y1<<endl;
		else if(x2==x3 && y2==y3) cout<<x1+x4-x2<<" "<<y1+y4-y2<<endl;
		else if(x2==x4 && y2==y4) cout<<x1+x3-x2<<" "<<y1+y3-y2<<endl;
		else if(x3==x4 && y3==y4) cout<<x3+x4-x1<<" "<<y3+y4-y1<<endl;
		x1=0;x2=0;x3=0;x4=0;y1=0;y2=0;y3=0;y4=0; //�M�� 
	} 
	return 0;
} 
