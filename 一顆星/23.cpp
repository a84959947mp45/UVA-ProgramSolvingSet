/*
	UVA11063�GB2-Sequence*CPE48-23 
	�D�ػ����G�P�_�O�_B2-Swquence (�C��pair�۴���P�B�����W���)�A�C��case�n��JN��ܦh�ִ���A�A��JN�Ӵ��� 
	�D�ا@�k�G����JN�A�b�ŧiinput[N]�A�P�_���S���ŦX���W��ƩάOpair�۴���P�A�p�G�����h��۴��d push_back��v
			  �p�GisB2==1���OB2-Swquence�A�Ϥ��h���O 
*/ 
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){	
	int N,cas=1; //	N����case�n��J�h��input�Acas��case�ƥ�
	 
	while(cin>>N){
		bool isB2=1; //	isB2��ܸ�case�OB2-Sequence
		vector<int> v; // v�ΨӦs��۴�� 
		int input[N]; // input[N]��J���� 
		
		// ��J���� 
		for(int i=0; i<N; i++) cin>>input[i];
		
		// �P�_B2-Sequence (�ᶵ��e��)
		for(int i=0; i<N-1; i++) 
			for(int j=i+1; j<N; j++){
				
				int d=input[j]-input[i]; // d�x�s�ᶵ��e������
				
				// �禡�����n���W 
				if(input[j]<=input[i]) {isB2=0; break;} 
				
				// find(���N���}�Y,���N������,�j�M����) ==> �ȬۦP�ǥX�Ӧ�}(isB2=0)�A�S���ǥXv.end()	
				if( ( find(v.begin(),v.end(),d) )!=v.end() ) {isB2=0; break;} 
				 
				v.push_back(d); // ��۴�Ȧs�iv�� 
			}
			
		//  �L�X���G 
		if(isB2) cout<<"Case #"<<cas++<<": It is a B2-Sequence."<<endl<<endl;
		else cout<<"Case #"<<cas++<<": It is not a B2-Sequence."<<endl<<endl;
		
		// �h����JENTER 
		char c=getchar(); 
	}
}

