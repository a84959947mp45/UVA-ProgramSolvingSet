#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

double radis(int,int);

int main(){
	
	double input;
	int flag=0;
	while(cin>>input){
		//程︽ぃ璶传︽ 
		if(flag)
            cout<<endl;
        flag = 1;
		int countComplete=0;
		int partCount=0;
		//耞Τ⊿ΤЧ伴伴 ┪琌场だ 
		for(int i=0;i<=input;i++){
			for(int j=0;j<=input;j++){
				
				if(radis(i,j)<=(input-0.5)&&radis(i+1,j+1)<=(input-0.5)){
				
					countComplete++;
				}else if(radis(i,j)<=(input-0.5)||radis(i+1,j+1)<=(input-0.5)){
					partCount++;
				}
			}
		}
		//程计秖璶4 
		printf("In the case n = %d, %d cells contain segments of the circle.\n",(int)input,partCount*4);
        printf("There are %d cells completely contained in the circle.\n",countComplete*4);
	} 
}
//翴翴禯瞒 
double radis(int x,int y){
	
	 return sqrt(pow(x,2)+pow(y,2));
	
	
}
