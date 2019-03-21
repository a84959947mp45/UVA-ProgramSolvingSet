//== 以上是自[瘋狂雲端]下載的資料 請自行剪貼到各檔中進行寫作
/*
//使用Java的考生請注意，最外層的類別(class)需命名為 main 。
//如果遇到超乎想像的狀況，請更改編譯器試看看!! 各編譯器特性不同!!
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

//find position
int find1(vector<int>,int);
vector<int> find2(vector<int>,int);

int main(){
	
	int exampleNumber;
	cin>>exampleNumber;
	
	while(exampleNumber--){
		
		vector< vector<int> >ballot;//記錄每場比賽投票 
		vector<bool>nameFail;  //紀錄有沒有被淘汰 
		vector<string>nameX;   //紀錄名子 
		
		int nameNumber;
		cin>>nameNumber;
		int reNumber=nameNumber;
		
		nameFail.resize(nameNumber);
		
		string nouse;
		getline(cin,nouse);
		//輸入名子 
		while(reNumber--){
			string name;
			getline(cin,name);
			nameX.push_back(name);
		}
		//初始化 
		for(int i=0;i<nameFail.size();i++){
			nameFail[i]=false;
		}
		//輸入比賽t成績 
		string str; 
		while(getline(cin,str)){
			if(str==" "||str==""){
				break;
			}
			stringstream ss;
			int reInt;
			vector<int> re;
			ss<<str;
			while(ss>>reInt){
				re.push_back(reInt);
			}
			ballot.push_back(re);
		}
		

		//開始計算 
		while(1){
			vector<int>all_cand;
			all_cand.resize(nameNumber);
			//initial
			
			//挑出每個比賽最強的 
			for(int i=0;i<ballot.size();i++){
				int people=0;
				while(1){
					if(!nameFail[ballot[i][people]]){
						all_cand[ballot[i][people]-1]++;
						break;
					}else{
						people++; 
					}
				}
			}
		
			int max=-1;
			int min=1000;
			int min_people_position=-1;
			bool detele =false;
			//判斷有沒有>50%
			for(int i=0;i<nameNumber;i++){
				if(all_cand[i]>max){
					max=all_cand[i];
				}
				if(all_cand[i]<min){
					min=all_cand[i];
					min_people_position=i;
				}
			}
		
		
			if((min==0&&max*2==ballot.size())||min_people_position==find1(all_cand,max)){
				vector<int>print;
				print=find2(all_cand,max);
				for(int i=0;i<print.size();i++){
					cout<<nameX[print[i]]<<endl;
				}
				if(exampleNumber!=0){
					cout<<endl;
				}
			       	break;
			}else if(max*2>=ballot.size()){
				cout<<nameX[find1(all_cand,max)]<<endl;
				if(exampleNumber!=0){
					cout<<endl;
				}
				break;
			}
			
			
			
		}
	
	}

} 
int find1(vector<int> xx,int a){
	for(int i =0;i<xx.size();i++){
		if(xx[i]==a){
			return i;
		}
	}
}
vector<int> find2(vector<int>xx,int a){
    vector<int>re;
    for(int i =0;i<xx.size();i++){
		if(xx[i]==a){
			re.push_back(i);
		}
	}

	return re;
}
//*/

