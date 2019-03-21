//UVA101 The Blocks Problem

//�D��²�z 
//�@�}�l�b�@���Z���ୱ�W��n���n��]�s���q0��n-1�^0���n���b0����m�W�A1���n���b1����m�W�A�̦�����
// �������u���H�U�X�ئX�k�h�n�쪺�覡�]a�Mb�O�n�쪺�s���^�G
//
//move a onto b
//�b�Na�h��b�W���e�A���Na�Mb�W���n���^��Ӫ���m�]�Ҧp�G1�N��^1���̶}�l���_�^
//move a over b
//�b�Na�h��b�Ҧb������n�줧�W���e�A���Na�W���n���^��Ӫ����_�]b�Ҧb������n�줣�ʡ^
//pile a onto b
//�Na�����M��W���n��@�_���b�W�A�b�h���eb�W�誺�n���^���
//pile a over b
//�Na�����M��W���n��@�_�h���b�Ҧb������n�줧�W
//quit
//�ʧ@����
//
//�e�|�Ӱʧ@���Ya=b�A�Ϊ�a, b�b�P�@��n�줤�A����o�˪��ʧ@��O���X�k���C�Ҧ����X�k���ʧ@���ӳQ�����A
//�]�N�O��U�n�짡�L���ܡC

//�t��k: 
// 1.���]�w�G�L�}�Cvector put 
// 2.�̷�n���n��h��l��put
// 3.��J���O
// 4.�̷ӫ��O�q�ƥH�W�ʧ@
// 5.�o�{a�Bb�b�P�@�Ӧ�l�W���L�Ŀ�J�A�h�^3 
// 6.�Y�o�{��Jquit�h����A�Y�S�����ܰh�^3 

//���D�P�ޥ�:
//1.��J�ϥ�C�y��scanf�|�[�ֵ{������t��
//2.�G��vector���ϥζ��F��
//3.�`�N!���X�����i�H��[�ΧR�������|�ɭP�t�αY��!!
//4.�ŧi��@�w�n��l�ơA���M�|���]�N�Ʀr 
 
#include <iostream>
#include <vector>
#include <cstdio> 

using namespace std;


int main(){
	
	int n;
	//��Jn�� 
	while(scanf("%d",&n)!=EOF){
		
		//�ŧi�G��vector put 
		vector< vector<int> >put;
		//����put�O����Ŷ� 
		put.reserve(1000);
		
		int i;
		string first;
		
		//��l��put 
		for(i=0;i<n;i++){
			vector<int>re;
			re.push_back(i);
			put.push_back(re);
		}
	
		//�}�l��J���O 
		while(cin>>first){
			//��J��quit�h�h�X 
			if(first=="quit"){
				break;
			}
			int a=0,b=0;
			int X=0,Y=-1;
			string second;
			cin>>a>>second>>b;
			//�o�{a=b��(�P�@�Ӥ��)�A����������O���s��J 
			if(a==b){
				continue;
			}
			//�M��a�Bb�b���@�Ӧ�l�W 
			for(i = 0 ; i < n ; i++){
				for(int j = 0;j < put[i].size();j++){
					if(put[i][j]==a){
						X=i;
					}else if(put[i][j]==b){
						Y=i;
					}
				}	
			}
			//�o�{X=Y(�o�{a�Bb�b�P�@���l)�ɡA����������O���s��J 
			if(X==Y){
				continue;
			}
			// move a onto b
			if(first=="move"&&second=="onto"){
				int count1= 0,count2 = 0;
				
				//���Na����W������e�^�o�쥻���a�� 
				for(i=0;i<put[X].size();i++){
					if(put[X][i]==a){
						count1 = i++;
						for(;i<put[X].size();i++){
							int inte=put[X][i];
							put[inte].push_back(inte);
						}
					}
				}
				//�M���쥻a����W������� 
				put[X].erase(put[X].begin()+count1,put[X].end());
				
				
				//���Nb����W������e�^�o�쥻���a�� 
				for(i=0;i<put[Y].size();i++){
					if(put[Y][i]==b){
						count2 = i++;
						for(;i<put[Y].size();i++){
							int inte=put[Y][i];
							put[inte].push_back(inte);
						}
					}
					
				}
				//�M���쥻b����W����� 
				put[Y].erase(put[Y].begin()+count2+1,put[Y].end());
				//�Na������b����W 
				put[Y].push_back(put[X][count1]);
				
			// move a over b	
			}else if(first=="move"&&second=="over"){
				int count1= 0,count2 = 0;
				//���Na����W������e�^�o�쥻���a��
				for(i=0;i<put[X].size();i++){
					if(put[X][i]==a){
						count1 = i++;
						for(;i<put[X].size();i++){
							int inte=put[X][i];
							put[inte].push_back(inte);
						}
					}
				}
				//�M���쥻�ba����W�����
				put[X].erase(put[X].begin()+count1,put[X].end());
				
				//�Na������b����W 
				put[Y].push_back(put[X][count1]);
			
			//pile a onto b
			}else if(first=="pile"&&second=="onto"){
				int count1= 0,count2 = 0;
				//���Nb����W������e�^�o�쥻���a��
				for(int i=0;i<put[Y].size();i++){
					if(put[Y][i]==b){
						count2 = i++;
						for(;i<put[Y].size();i++){
							int inte=put[Y][i];
							put[inte].push_back(inte);
						}
					}
					
				}
				//�M��b����W�����
				put[Y].erase(put[Y].begin()+count2+1,put[Y].end());
				
				//�Na�����L�W����������b����W
				for(int i=0;i<put[X].size();i++){
					if(put[X][i]==a){
						count1 = i;
						for(;i<put[X].size();i++){
							put[Y].push_back(put[X][i]);
						}
						break;
					}
				}
				//�M���쥻�Na�����L�W�������
				put[X].erase(put[X].begin()+count1,put[X].end());
			
			//pile a over b	
			}else if(first=="pile"&&second=="over"){
				int count1= 0,count2 = 0;
				//�Na�����L�W����������b����W
				for(i=0;i<put[X].size();i++){
					if(put[X][i]==a){
						count1 = i;
						for(;i<put[X].size();i++){
							put[Y].push_back(put[X][i]);
						}
					}
				}
				//�M���쥻�Na�����L�W�������
				put[X].erase(put[X].begin()+count1,put[X].end());
				
			}
			
			
		}
		for(i = 0 ; i < n ; i++){
			cout<<i<<":";
			for(int j = 0;j < put[i].size();j++){
				cout<<" "<<put[i][j];
			}
			cout<<endl;	
		}
		
		
		
		
	}
	
	
	return 0;
} 

