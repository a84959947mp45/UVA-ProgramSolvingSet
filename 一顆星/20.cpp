/*
	UVA10812：Beat the Spread! 
	題目說明：輸入S(兩數總和)和D(兩數相差)求兩數可能是多少，如果兩數求不出則輸出impossible
	題目做法：x = (S+D)/2  ;  y = (S-D)/2 
			  當x,y小於0或是不為整數(%2驗證)，則輸出impossible
			  反之，輸出x,y 
*/

#include <iostream>
using namespace std;
int main(){
	int N,S,D,x,y;
	cin>>N;
	while(N>0){
		cin>>S>>D;
		x=S+D;
		y=S-D;
		if(x%2!=0 || x<0 || y%2!=0 || y<0) cout<<"impossible"<<endl;
		else cout<<x/2<<" "<<y/2<<endl;
		N--;
	}
}

