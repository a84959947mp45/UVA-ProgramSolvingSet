#include<iostream>
#include<vector>
using namespace std;

int countPosition(int,int,vector<int>);
int counterPositionValue(int&,vector<int>);
int main(){
	int n,k;
	//��J�� 
	while(cin>>n>>k){
		if(n==0||k==0){
			break;
		}
		int position=0;
	    vector<int>people;
	    people.assign(n,0);
	    for(int i=1;i<=n;i++){
	    	people[i-1]=i;
		}
	 
	    int die;
	    try{
	    	for(int i=0;i<people.size();i++){
		
	    	int reposition=-1;
	       position=countPosition(position,k,people);
	       reposition=position;
	   // cout<<"�Q�^�O���H:"<<people[position]<<endl;
	       die=people[position];
		   people[position]=-1;
		   position=countPosition(position,k+1,people);
		   //���p����-1�N��X�̫ᦺ�`���� 
		   if(position==-2){
		   	  throw die;
		   }
		//cout<<"�����I�����H"<<people[position]<<" ��m"<<position<<endl;
		   people[reposition]=people[position];
		   people[position]=-1;
		   position=reposition;
		   position=countPosition(position,2,people);
	    //cout<<"�U�@�Ӷ}�l���H"<<people[position]<<endl;
	    //cout<<endl;
	      }
    	}
		catch(int die){
			if(n==1){
				 cout<<"1"<<endl;
			}else{
		        cout<<(people.size()+1-die)%people.size()+1<<endl;		
			}
		   
		} 
	    
		
	}
	
} 
//���Xcount�B �Ǧ^�� 
int countPosition(int position,int count,vector<int> people){
	//�Ĥ@�����ܼ�
	int first=0;
	 
	for(int i=1;i<count;i++){
		int countX=0;
		//�P�_�U�@�ӬO���O-1 
		while(1){
		   //���people�̭����O-1	
		   if(countX==people.size()){
		   	  return -2;
		   }	
			//���p�O-1�N�~��� 
		   if(counterPositionValue(position,people)==-1){
		   	 countX++;
		     continue;
	       }
	       	
	       	
	       	 break;
		   		
		}	

	} 	
	return position;
	
}
//�����ƨ줣�O-1����m 
int counterPositionValue(int& position,vector<int>people){
	
	position++;
	if(position==people.size()){
		position-=people.size();
	}
	
	return people[position];
	
	
}

