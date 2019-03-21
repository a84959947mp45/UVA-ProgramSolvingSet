//UVA10268-498bis 解微分
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
	long x,a[1000]={0},n=0,out=0,i,j,inSize,sign=1,nowX;
	string input;
	for(;cin>>x;){
		for(i=0;i<=999;i++){
			a[i]=0;
		}
		n=0;
		out=0;
		sign=1;
		input.clear();
		cin.ignore();
		getline(cin,input);
		inSize=input.size();
		for(i=0;i<inSize;i++){
			switch(input[i]){
				case '0': case '1': case '2': case'3': case '4':  case '5': case '6': case '7': case '8': case '9':
					a[n]=a[n]*10+input[i]-'0';
					break;
				case '-':
					sign=-1;
					break;
				case ' ':
					a[n]*=sign;
					n++;
					sign=1;
					break;
				default:
					break;
			}
		}
		for(i=0;i<n;i++){
			if((n-i)==1 && a[i]!=0){
				out+=a[i];
			}
			else{
				nowX=1;
				for(j=n;j>i+1;j--){
					nowX*=x;
				}
				out+=a[i]*(n-i)*nowX;
			}
		}
		cout<<out<<endl;
	}
	return 0;
} 

//存在問題： 清空,cin.ignore(),總項數判斷 
