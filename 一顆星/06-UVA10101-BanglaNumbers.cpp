//UVA10101-BanglaNumbers
#include<iostream>
#include<string>
using namespace std;

int main(){
	string input;
	int CASE,i,j,inSize;
	for(CASE=1;cin>>input;CASE++){
		if(CASE<10)cout<<" ";
		cout<<"  "<<CASE<<". ";
		inSize=input.size();
		switch(inSize){
			case 15: cout<<input[inSize-15]<<" kuti";
					 if(input[inSize-14]!='0' || input[inSize-13]!='0' || input[inSize-12]!='0' || input[inSize-11]!='0' || input[inSize-10]!='0' || input[inSize-9]!='0' || input[inSize-8]!='0') cout<<" ";
					 if(input[inSize-14]=='0' && input[inSize-13]=='0' && input[inSize-12]=='0' && input[inSize-11]=='0' && input[inSize-10]=='0' && input[inSize-9]=='0' && input[inSize-8]=='0') cout<<" ";
			case 14: if(input[inSize-14]!='0')cout<<input[inSize-14];
			case 13: if(input[inSize-13]!='0' || input[inSize-14]!='0')cout<<input[inSize-13]<<" lakh ";
			case 12: if(input[inSize-12]!='0')cout<<input[inSize-12];
			case 11: if(input[inSize-11]!='0' || input[inSize-12]!='0')cout<<input[inSize-11]<<" hajar ";
			case 10: if(input[inSize-10]!='0')cout<<input[inSize-10]<<" shata ";
			case 9: if(input[inSize-9]!='0')cout<<input[inSize-9];
			case 8: if(input[inSize-8]!='0' || input[inSize-9]!='0')cout<<input[inSize-8]<<" ";
					cout<<"kuti";
					if(input[inSize-7]!='0' || input[inSize-6]!='0' || input[inSize-5]!='0' || input[inSize-4]!='0' || input[inSize-3]!='0' || input[inSize-2]!='0' || input[inSize-1]!='0') cout<<" ";
			case 7: if(input[inSize-7]!='0')cout<<input[inSize-7];
			case 6: if(input[inSize-6]!='0' || input[inSize-7]!='0')cout<<input[inSize-6]<<" lakh ";
			case 5: if(input[inSize-5]!='0')cout<<input[inSize-5];
			case 4: if(input[inSize-4]!='0' || input[inSize-5]!='0')cout<<input[inSize-4]<<" hajar ";
			case 3: if(input[inSize-3]!='0')cout<<input[inSize-3]<<" shata ";
			case 2: if(input[inSize-2]!='0')cout<<input[inSize-2];
			case 1: if(input[inSize-1]!='0' || input[inSize-2]!='0')cout<<input[inSize-1];
					cout<<endl;
			break;
			default: break;
		}
	}
	return 0;
}

//存在問題:CASE空格數,消除00及單位,kuti空格 
