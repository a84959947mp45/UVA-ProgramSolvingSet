//UVA11150-Cola
#include<iostream>
using namespace std;

int main(){
	int full,empty,out;
	for(;cin>>full;){
		empty=1;
		out=0;
		for(;;){
			out+=full;
			empty+=full;
			full=0;
			if(empty<3) break;
			full+=empty/3;
			empty=empty%3;
		}
		cout<<out<<endl;
	}
	return 0;
}

//存在問題：可借一空瓶 
