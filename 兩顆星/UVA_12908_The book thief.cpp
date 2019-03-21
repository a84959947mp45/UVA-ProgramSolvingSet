#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int  Content[15000];
	Content[0]=0;
	for(int i =1;i<15000;i++){
		Content[i]=Content[i-1]+i;
	}
	int input;
	while(cin>>input){
		
		if(input==0){
			break;
		}
		int n =sqrt(input*2);
		for(int i =n;i<15000;i++){
			if(input<Content[i]){
				cout<<Content[i]-input<<" "<<i<<endl;
				break;
			}else if(input==Content[i]){
				cout<<i+1<<" "<<i+1<<endl;
				break;
			}
		}
		
	}
	
	
	
} 
