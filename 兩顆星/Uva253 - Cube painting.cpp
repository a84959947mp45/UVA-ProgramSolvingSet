//會遇到的問題:
//1.順序要對
//2.最好每一次就從原本開始的下一位去算
//3. X,Y的順序都要是對的 
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
		//初始化 
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
		//第一個迴圈先找配對 ，有配對到的就將ROOT設為N 
		int i=0;
		while(1){
			int re=0;
			re=findPosition(i,ViewRoot,X,Y);
		//	cout<<i<<" XX "<<re<<endl; 
			//沒配對到 
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
//找出一樣root的Y點是誰 
int findPosition(int i,vector<char>root,char*X,char*Y){
	 //新增YRound,Y的root中順序為何
	 char YRound[4];
	 for(int j =0 ; j<4;j++){
	 	YRound[j]=Y[position[i][j]-1];
	 	
	 } 
	 //尋找A正方形一樣root的地方 
	 for(int j = 0 ;j<6;j++){
	 //	cout<<"是否有根相等"<< Y[i]<<"/"<<root[j]<<" "<<j<<endl; 
	 	if(Y[i]==root[j]){
	 	//	cout<<"相等根位置:"<<j<<"及符號:"<<root[j]<<endl; 
	 		if(judgeMatch(j,root,X,YRound)==1){
	 	//		cout<<"success match:"<<root[j]<<endl; 
	 		     return j;	
			 }
		}
	
	 } 
	 return -2;
}
//看看有沒有完全MATCH 
bool judgeMatch(int i,vector<char>root,char*X,char*Y){
//	cout<<"根為"<<root[i]<<" "<<position[i][0]<<endl; 
	int count=0;
	//多一個計數器
	int start =0; 
	for(int j =0;j<8&&count<4;++j){
		
		int re =count;
	   // cout<<position[i][j]<<" "<<"比對"<<X[position[i][j]-1]<<" "<<Y[count]<<endl;
		if(X[position[i][j]-1]==Y[count]){
		//	cout<<"符合的"<<X[position[i][j]-1]<<endl;
			count++;
		}
		//判斷有沒有連續
		if(count==re){
		//	cout<<"重新配對"<<endl; 
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
