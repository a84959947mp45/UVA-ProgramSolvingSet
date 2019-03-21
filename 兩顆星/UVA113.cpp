#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	double a,b;
	
	while(cin>>a>>b){
		
		double k;
		double re;
		
		re = log(b)/log(2) / a ;
		
		
		k = pow(2,re);
		
		cout<<k<<endl;
		
	}
	
	
	
}
