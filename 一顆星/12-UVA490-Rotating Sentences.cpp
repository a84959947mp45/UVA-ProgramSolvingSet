#include<iostream>
#include<string>
using namespace std;

int main(){
	string input[100];
	int i=0,j,nowSize=0,lSize=0,totalS=0,outSize;
	
	for(;getline(cin,input[totalS])&&input[totalS][0]!='0';totalS++);
	for(i=0;i<totalS;i++){
		if(input[i].size()>lSize) lSize=input[i].size();
	}
	for(j=0;j<lSize;j++){
		for(;input[totalS-nowSize].size()<=j;){
			nowSize++;
		}
		for(i=totalS-1/*-nowSize*/;i>=0;i--){
			if(i>totalS-nowSize) cout<<" ";
			else cout<<input[i][j];
		}
		cout<<endl;
	}
	return 0;
}

//存在問題：前方空格補足,倒印 
