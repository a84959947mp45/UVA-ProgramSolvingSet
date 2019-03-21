#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int GCD(int,int);

int main(){

	string str;
	
	while(cin>>str){
	  
	  int i;
	  double c=0,re=0,r1=0,r2=0,sumup,sumdown,X;
	  
	  for(i=str.size()-4;i>=2;i--){
	  	r1+=(str[i]-'0')*pow(10,c);
	  	c++;
	  }
	  for(i=str.size()-5;i>=2;i--){
	  	r2+=(str[i]-'0')*pow(10,re);
	  	re++;
	  }
	  
	  sumup=r1-r2;
	  sumdown=9*pow(10,re);
	  X=GCD(sumup,sumdown);
	  
	  cout<<sumup/X<<"/"<<sumdown/X<<endl;
	  
	
	}
	
	return 0;

}
int GCD(int a,int b){
	
	if(a%b==0){
		return b;
	}else{
		
		GCD(b,a%b);
		
	}
	
}

