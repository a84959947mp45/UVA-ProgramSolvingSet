//== �H�W�O��[�ƨg����]�U������� �Цۦ�ŶK��U�ɤ��i��g�@
/*
//�ϥ�Java���ҥͽЪ`�N�A�̥~�h�����O(class)�ݩR�W�� main �C
//�p�G�J��W�G�Q�������p�A�Ч��sĶ���լݬ�!! �U�sĶ���S�ʤ��P!!
//�w�]����B�H������B�T�w����O�Ψ����U�����Ϊ��C���ɡA�u�ݷt������O�_�q�L!!
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

//find position
int find1(vector<int>,int);
vector<int> find2(vector<int>,int);

int main(){
	
	int exampleNumber;
	cin>>exampleNumber;
	
	while(exampleNumber--){
		
		vector< vector<int> >ballot;//�O���C�����ɧ벼 
		vector<bool>nameFail;  //�������S���Q�^�O 
		vector<string>nameX;   //�����W�l 
		
		int nameNumber;
		cin>>nameNumber;
		int reNumber=nameNumber;
		
		nameFail.resize(nameNumber);
		
		string nouse;
		getline(cin,nouse);
		//��J�W�l 
		while(reNumber--){
			string name;
			getline(cin,name);
			nameX.push_back(name);
		}
		//��l�� 
		for(int i=0;i<nameFail.size();i++){
			nameFail[i]=false;
		}
		//��J����t���Z 
		string str; 
		while(getline(cin,str)){
			if(str==" "||str==""){
				break;
			}
			stringstream ss;
			int reInt;
			vector<int> re;
			ss<<str;
			while(ss>>reInt){
				re.push_back(reInt);
			}
			ballot.push_back(re);
		}
		

		//�}�l�p�� 
		while(1){
			vector<int>all_cand;
			all_cand.resize(nameNumber);
			//initial
			
			//�D�X�C�Ӥ��ɳ̱j�� 
			for(int i=0;i<ballot.size();i++){
				int people=0;
				while(1){
					if(!nameFail[ballot[i][people]]){
						all_cand[ballot[i][people]-1]++;
						break;
					}else{
						people++; 
					}
				}
			}
		
			int max=-1;
			int min=1000;
			int min_people_position=-1;
			bool detele =false;
			//�P�_���S��>50%
			for(int i=0;i<nameNumber;i++){
				if(all_cand[i]>max){
					max=all_cand[i];
				}
				if(all_cand[i]<min){
					min=all_cand[i];
					min_people_position=i;
				}
			}
		
		
			if((min==0&&max*2==ballot.size())||min_people_position==find1(all_cand,max)){
				vector<int>print;
				print=find2(all_cand,max);
				for(int i=0;i<print.size();i++){
					cout<<nameX[print[i]]<<endl;
				}
				if(exampleNumber!=0){
					cout<<endl;
				}
			       	break;
			}else if(max*2>=ballot.size()){
				cout<<nameX[find1(all_cand,max)]<<endl;
				if(exampleNumber!=0){
					cout<<endl;
				}
				break;
			}
			
			
			
		}
	
	}

} 
int find1(vector<int> xx,int a){
	for(int i =0;i<xx.size();i++){
		if(xx[i]==a){
			return i;
		}
	}
}
vector<int> find2(vector<int>xx,int a){
    vector<int>re;
    for(int i =0;i<xx.size();i++){
		if(xx[i]==a){
			re.push_back(i);
		}
	}

	return re;
}
//*/

