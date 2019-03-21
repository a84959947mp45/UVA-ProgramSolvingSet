//UVA10222-Decode the Mad man
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
	string input;
	int i,size;
	for(;getline(cin,input);){
		size=input.size();
		for(i=0;i<size;i++){
			input[i]=tolower(input[i]);
			switch(input[i]){
				case 'e': cout<<"q";
						  break;
				case 'r': cout<<"w";
						  break;
				case 't': cout<<"e";
						  break;
				case 'y': cout<<"r";
						  break;
				case 'u': cout<<"t";
						  break;
				case 'i': cout<<"y";
						  break;
				case 'o': cout<<"u";
						  break;
				case 'p': cout<<"i";
						  break;
				case '[': cout<<"o";
						  break;
				case ']': cout<<"p";
						  break;
				case 'd': cout<<"a";
						  break;
				case 'f': cout<<"s";
						  break;
				case 'g': cout<<"d";
						  break;
				case 'h': cout<<"f";
						  break;
				case 'j': cout<<"g";
						  break;
				case 'k': cout<<"h";
						  break;
				case 'l': cout<<"j";
						  break;
				case ';': cout<<"k";
						  break;
				case '\'': cout<<"l";
						  break;
				case 'c': cout<<"z";
						  break;
				case 'v': cout<<"x";
						  break;
				case 'b': cout<<"c";
						  break;
				case 'n': cout<<"v";
						  break;
				case 'm': cout<<"b";
						  break;
				case ',': cout<<"n";
						  break;
				case '.': cout<<"m";
						  break;
				default: cout<<input[i];
						 break;
			}
		}
		cout<<endl;
	}
	return 0;
}

//存在問題:空格,'檢查,換行 
