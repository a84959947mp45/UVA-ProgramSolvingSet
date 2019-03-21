//UVA299-Train Swapping
#include<iostream>
using namespace std;

int main(){
	int CASE,inL,inNum[51],i,j,t,out;
	cin>>CASE;
	for(t=0;t<CASE;t++){
		out=0;
		cin>>inL;
		for(i=0;i<inL;i++){
			cin>>inNum[i];
		}
		for(i=1;i<inL;i++){
			for(j=0;;j++){
				if(i==inNum[j]) break;
				else if(i<inNum[j]) out++;
			}
		}
		cout<<"Optimal train swapping takes "<<out<<" swaps."<<endl;
	}
	return 0;
}

//存在問題：無 
