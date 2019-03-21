#include<iostream>

using namespace std;

int GCD(int,int);

int main(){
	int x;
	
	while(cin>>x){
		int	G=0,i,j;
		
		for(i=1;i<x;i++)
		for(j=i+1;j<=x;j++)
		{
		    G+=GCD(i,j);
		}
		cout<<G<<endl;
	}
	
}


int GCD(int a,int b){
	
	if(a%b==0){
		return b;
	}else{
		int x;
		x=GCD(b,a%b);
		return x;
	}
	
}
