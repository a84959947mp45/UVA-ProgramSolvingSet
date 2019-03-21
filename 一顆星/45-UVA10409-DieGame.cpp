//UVA10409 Die Game
#include<iostream>
#include<string>
using namespace std;

int main(){
	int inNum,north,south,west,east,up,down,i,oldN,oldS,oldW,oldE,oldU,oldD;
	string inStr;
	for(;;){
		north=2;
		south=5;
		west=3;
		east=4;
		up=1;
		down=6;
		cin>>inNum;
		if(inNum==0) break;
		for(i=0;i<inNum;i++){
			oldN=north;
			oldS=south;
			oldW=west;
			oldE=east;
			oldU=up;
			oldD=down;
			cin>>inStr;
			switch(inStr[0]){
				case 'n':
					north=oldU;
					south=oldD;
					up=oldS;
					down=oldN;
					break;
				case 's':
					north=oldD;
					south=oldU;
					up=oldN;
					down=oldS;
					break;
				case 'w':
					west=oldU;
					east=oldD;
					up=oldE;
					down=oldW;
					break;
				case 'e':
					west=oldD;
					east=oldU;
					up=oldW;
					down=oldE;
					break;
			}
		}
		cout<<up<<endl;
	}
	return 0;
}

//存在問題：輸出後重置,上方相同旁邊不同(ex:north+north == 6 == west+west; 但此時的north可能是5(N+N)or2(W+W) ) 
