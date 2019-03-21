#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

struct XX{
	
	int start ;
	int finish;
};

void A(int ,vector<bool>,vector<XX>,int);
bool judgeX(XX,vector<bool>);

int Max ;

int main(){
	
	
	int n;
	cin>>n;
	while(n--){
		Max =0;
		vector<XX> time;
		bool xx[11];
		memset(xx,0,sizeof(xx));
	    vector<bool>judge(xx,xx+11);
		for(int i =0;;i++){
			int x,y;
			cin>>x>>y;
			if(x==0&&y==0){
				break;
			}
			XX re;
			re.start=x;
			re.finish=y;
			time.push_back(re);
		}
		A(-1,judge,time,0);
		
		cout<<Max<<endl;
	}
	
} 
void A(int root,vector<bool> judge,vector<XX> time,int level){
	
	if(level>Max){
		Max=level;
	}
	
	for(int i=root+1;i<time.size();i++){
		if(!judgeX(time[i],judge)){
			continue;	
		}else{
			vector<bool> rejudge =judge;
			int re=0;
		/*	cout<<"1---------"<<endl;

			  for(int z =0;z<11;z++){
		    	
		    cout<<rejudge[z]<<" ";
			}
			cout<<endl;
			*/
			for(int j = time[i].start;j<time[i].finish;j++){
				rejudge[j]=true;
			}/*
			cout<<"2"<<endl;
		
			cout<<endl;
			  for(int z =0;z<11;z++){
		    	
		    cout<<rejudge[z]<<" ";
			}
			cout<<endl;
			cout<<"-------"<<endl;*/
			A(i,rejudge,time,level+1);
		
		}		
	}


	
}
bool judgeX(XX a,vector<bool> judge){
	
	for(int i =a.start;i<a.finish;i++){
		if(judge[i]==true){
			return false;
		}
		
	}
	
	return true;
}
