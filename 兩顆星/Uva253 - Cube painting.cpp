//�|�J�쪺���D:
//1.���ǭn��
//2.�̦n�C�@���N�q�쥻�}�l���U�@��h��
//3. X,Y�����ǳ��n�O�諸 
#include<iostream>
#include<vector>

using namespace std;

int findPosition(int,vector<char>,char*,char*);
bool judgeMatch(int,vector<char>,char*,char*);

int position[6][8]={
				   {2,3,5,4,2,3,5,4},
                   {3,1,4,6,3,1,4,6},
                   {6,5,1,2,6,5,1,2},
                   {6,2,1,5,6,2,1,5},
                   {1,3,6,4,1,3,6,4},
                   {5,3,2,4,5,3,2,4}
				};

int main(){
	
	string str;
	
	while(cin>>str){
		
		char X[6],Y[6];
		//��l�� 
		for(int i =0;i<6;i++){
			X[i]=str[i];
		}
		for(int i =6;i<12;i++){
			Y[i-6]=str[i];
		}
		
		vector<char>ViewRoot;
		for(int i = 0 ;i<6;i++){
			ViewRoot.push_back(X[i]);
		}
		//�Ĥ@�Ӱj�����t�� �A���t��쪺�N�NROOT�]��N 
		int i=0;
		while(1){
			int re=0;
			re=findPosition(i,ViewRoot,X,Y);
		//	cout<<i<<" XX "<<re<<endl; 
			//�S�t��� 
			if(re==-2){
				cout<<"FALSE"<<endl;
				break;
			}else{
				
			}
			ViewRoot[re]='N';
			i++;
			if(i==6){
		    	cout<<"TRUE"<<endl;
		    	break;
		    }
		}
	}
	
} 
//��X�@��root��Y�I�O�� 
int findPosition(int i,vector<char>root,char*X,char*Y){
	 //�s�WYRound,Y��root�����Ǭ���
	 char YRound[4];
	 for(int j =0 ; j<4;j++){
	 	YRound[j]=Y[position[i][j]-1];
	 	
	 } 
	 //�M��A����Τ@��root���a�� 
	 for(int j = 0 ;j<6;j++){
	 //	cout<<"�O�_���ڬ۵�"<< Y[i]<<"/"<<root[j]<<" "<<j<<endl; 
	 	if(Y[i]==root[j]){
	 	//	cout<<"�۵��ڦ�m:"<<j<<"�βŸ�:"<<root[j]<<endl; 
	 		if(judgeMatch(j,root,X,YRound)==1){
	 	//		cout<<"success match:"<<root[j]<<endl; 
	 		     return j;	
			 }
		}
	
	 } 
	 return -2;
}
//�ݬݦ��S������MATCH 
bool judgeMatch(int i,vector<char>root,char*X,char*Y){
//	cout<<"�ڬ�"<<root[i]<<" "<<position[i][0]<<endl; 
	int count=0;
	//�h�@�ӭp�ƾ�
	int start =0; 
	for(int j =0;j<8&&count<4;++j){
		
		int re =count;
	   // cout<<position[i][j]<<" "<<"���"<<X[position[i][j]-1]<<" "<<Y[count]<<endl;
		if(X[position[i][j]-1]==Y[count]){
		//	cout<<"�ŦX��"<<X[position[i][j]-1]<<endl;
			count++;
		}
		//�P�_���S���s��
		if(count==re){
		//	cout<<"���s�t��"<<endl; 
            count=0;
			j=start;
			start++;
		} 
	}
	if(count==4){
		return true;
	}else{
		return false;
	}

}
