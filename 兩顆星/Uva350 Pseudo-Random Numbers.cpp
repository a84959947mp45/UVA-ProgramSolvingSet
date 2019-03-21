#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	int Z,I,M,L;
	int total=0;
	
	while(cin>>Z>>I>>M>>L){
		
		if(Z==0&&I==0&&M==0&&L==0){
			break;
		}
		
		int record[10000];
		memset(record,0,10000*4);
		
		int count=1;
		while(record[L]==0){
			
			record[L]=count;
			L=(Z*L+I)%M;
			count++;
		};
		
		
		total++;
		cout<<"Case "<<total<<": "<<count-record[L]<<endl;
		
	}
	
}
