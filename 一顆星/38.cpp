/*
	UVA10642�GCan You Solve It?
	�D�ػ����G(***y����b�Ax���a�b***) ��Jstart��x,y�b�A�H��final��x,y�b�A�D�g�L�h�֤F�I(�]�t���I)�A���u�W�h�������W�訫�A���쳻��q�U�@��y�b�}�l��
			  ex: (0,0) => (0,1) => (1,0) => (0,2)
	�D�ذ��k�G�U��
*/
#include <iostream>
using namespace std;

// �y�жbstruct 
struct crd{
	int x,y;
}start,final;

int main(){
	int cas;
	cin>>cas;
	for(int i=1; i<=cas; i++){
		int count=0; // �p��g�L���I���ƶq 
		cin>>start.x>>start.y>>final.x>>final.y; //��J�_�l�I�M���I�� xy�b 
		
		// �D�g�L�I�j�� (a���ĴX���׽u) 
		for(int a=start.x+start.y; !(start.x==final.x && start.y==final.y);){
			if(start.y==0) {start.y=(++a); start.x=0; count++;} // �I�쥪�W���Astart.y�ܦ� ++a�Astart.x�ܦ�0 
			else {start.y--; start.x++; count++;} // �������~ start.x++; start.y--; count++;	
		}
		cout<<"Case "<<i<<": "<<count<<endl;	
	}
}
