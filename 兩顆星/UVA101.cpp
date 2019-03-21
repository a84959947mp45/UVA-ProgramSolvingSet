//UVA101 The Blocks Problem

//題目簡述 
//一開始在一平坦的桌面上有n塊積木（編號從0到n-1）0號積木放在0號位置上，1號積木放在1號位置上，依此類推
// 機器手臂有以下幾種合法搬積木的方式（a和b是積木的編號）：
//
//move a onto b
//在將a搬到b上之前，先將a和b上的積木放回原來的位置（例如：1就放回1的最開始位罝）
//move a over b
//在將a搬到b所在的那堆積木之上之前，先將a上的積木放回原來的位罝（b所在的那堆積木不動）
//pile a onto b
//將a本身和其上的積木一起放到b上，在搬之前b上方的積木放回原位
//pile a over b
//將a本身和其上的積木一起搬到到b所在的那堆積木之上
//quit
//動作結束
//
//前四個動作中若a=b，或者a, b在同一堆積木中，那麼這樣的動作算是不合法的。所有不合法的動作應該被忽略，
//也就是對各積木均無改變。

//演算法: 
// 1.先設定二微陣列vector put 
// 2.依照n塊積木去初始化put
// 3.輸入指令
// 4.依照指令從事以上動作
// 5.發現a、b在同一個位子上為無效輸入，退回3 
// 6.若發現輸入quit則停止，若沒有的話退回3 

//難題與技巧:
//1.輸入使用C語言scanf會加快程式執行速度
//2.二維vector的使用須了解
//3.注意!走訪中不可以填加或刪除元素會導致系統崩潰!!
//4.宣告後一定要初始化，不然會有魔術數字 
 
#include <iostream>
#include <vector>
#include <cstdio> 

using namespace std;


int main(){
	
	int n;
	//輸入n值 
	while(scanf("%d",&n)!=EOF){
		
		//宣告二維vector put 
		vector< vector<int> >put;
		//給予put記憶體空間 
		put.reserve(1000);
		
		int i;
		string first;
		
		//初始化put 
		for(i=0;i<n;i++){
			vector<int>re;
			re.push_back(i);
			put.push_back(re);
		}
	
		//開始輸入指令 
		while(cin>>first){
			//輸入到quit則退出 
			if(first=="quit"){
				break;
			}
			int a=0,b=0;
			int X=0,Y=-1;
			string second;
			cin>>a>>second>>b;
			//發現a=b時(同一個方塊)，忽略此行指令重新輸入 
			if(a==b){
				continue;
			}
			//尋找a、b在哪一個位子上 
			for(i = 0 ; i < n ; i++){
				for(int j = 0;j < put[i].size();j++){
					if(put[i][j]==a){
						X=i;
					}else if(put[i][j]==b){
						Y=i;
					}
				}	
			}
			//發現X=Y(發現a、b在同一行位子)時，忽略此行指令重新輸入 
			if(X==Y){
				continue;
			}
			// move a onto b
			if(first=="move"&&second=="onto"){
				int count1= 0,count2 = 0;
				
				//先將a方塊上的方塊送回她原本的地方 
				for(i=0;i<put[X].size();i++){
					if(put[X][i]==a){
						count1 = i++;
						for(;i<put[X].size();i++){
							int inte=put[X][i];
							put[inte].push_back(inte);
						}
					}
				}
				//清除原本a方塊上面的方塊 
				put[X].erase(put[X].begin()+count1,put[X].end());
				
				
				//先將b方塊上的方塊送回她原本的地方 
				for(i=0;i<put[Y].size();i++){
					if(put[Y][i]==b){
						count2 = i++;
						for(;i<put[Y].size();i++){
							int inte=put[Y][i];
							put[inte].push_back(inte);
						}
					}
					
				}
				//清除原本b方塊上的方塊 
				put[Y].erase(put[Y].begin()+count2+1,put[Y].end());
				//將a方塊放到b方塊上 
				put[Y].push_back(put[X][count1]);
				
			// move a over b	
			}else if(first=="move"&&second=="over"){
				int count1= 0,count2 = 0;
				//先將a方塊上的方塊送回她原本的地方
				for(i=0;i<put[X].size();i++){
					if(put[X][i]==a){
						count1 = i++;
						for(;i<put[X].size();i++){
							int inte=put[X][i];
							put[inte].push_back(inte);
						}
					}
				}
				//清除原本在a方塊上的方塊
				put[X].erase(put[X].begin()+count1,put[X].end());
				
				//將a方塊放到b方塊上 
				put[Y].push_back(put[X][count1]);
			
			//pile a onto b
			}else if(first=="pile"&&second=="onto"){
				int count1= 0,count2 = 0;
				//先將b方塊上的方塊送回她原本的地方
				for(int i=0;i<put[Y].size();i++){
					if(put[Y][i]==b){
						count2 = i++;
						for(;i<put[Y].size();i++){
							int inte=put[Y][i];
							put[inte].push_back(inte);
						}
					}
					
				}
				//清除b方塊上的方塊
				put[Y].erase(put[Y].begin()+count2+1,put[Y].end());
				
				//將a方塊跟他上面的方塊放到b方塊上
				for(int i=0;i<put[X].size();i++){
					if(put[X][i]==a){
						count1 = i;
						for(;i<put[X].size();i++){
							put[Y].push_back(put[X][i]);
						}
						break;
					}
				}
				//清除原本將a方塊跟他上面的方塊
				put[X].erase(put[X].begin()+count1,put[X].end());
			
			//pile a over b	
			}else if(first=="pile"&&second=="over"){
				int count1= 0,count2 = 0;
				//將a方塊跟他上面的方塊放到b方塊上
				for(i=0;i<put[X].size();i++){
					if(put[X][i]==a){
						count1 = i;
						for(;i<put[X].size();i++){
							put[Y].push_back(put[X][i]);
						}
					}
				}
				//清除原本將a方塊跟他上面的方塊
				put[X].erase(put[X].begin()+count1,put[X].end());
				
			}
			
			
		}
		for(i = 0 ; i < n ; i++){
			cout<<i<<":";
			for(int j = 0;j < put[i].size();j++){
				cout<<" "<<put[i][j];
			}
			cout<<endl;	
		}
		
		
		
		
	}
	
	
	return 0;
} 

