/*
	UVA11005：Cheapest Base
	題目說明：輸入case數(cas)，每個case會輸入4列9個數字表示每個字元
			  需要的墨水量，接下來輸入測資N，輸出該測資用幾進制的方式會省更多墨水(可有很多個進制輸出) 
	題目解答：使用map<int,int> m 儲存該進制的墨水量，然後再對map的value做排列(使用vector<pair<int,int> >技巧)
			  輸出該vector最小value的first，然後在等下一個測資，重複進行動作 
*/
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

bool CmpByValue(pair<int,int> &a, pair<int,int> &b){
	if(a.second==b.second) return a.first<b.first;
	else return a.second<b.second;
}


int main(){
	int cas,N;
	cin>>cas; // 輸入case數
	
	// 計算&輸出迴圈 
	for(int a=1; a<=cas; a++){
		cout<<"Case "<<a<<":"<<endl;
		int ink[36]; // ink[36] 36個字元的需要墨水數 
		
		for(int i=0; i<=35; i++) cin>>ink[i]; // 輸入各字元所需墨水數 
		
		cin>>N; // 輸入測資數量
		
		// 算法：m[進制] += ink[測資%進制] 
		while(N>0){
			int number,tmp; 
			map<int,int> m;
			cin>>number;
			for(int b=2; b<=36; b++){
				tmp=number;
				if(number==0) m[b]==0;	
				while(tmp){
					m[b]+=ink[tmp%b];
					tmp/=b;
				}			
			}
			
			//vector 為map排大小 
			vector<pair<int,int> > vec(m.begin(),m.end());  
			sort(vec.begin(),vec.end(),CmpByValue);  
			
			cout<<"Cheapest base(s) for number "<<number<<": ";
			
			// 輸出最小墨水需求的進制 
			for(vector<pair<int,int> >::iterator it=vec.begin(),it2=vec.begin()+1; it!=vec.end(); it++,it2++){
				if(it2->second > it->second) {cout<<it->first<<endl; break;}
				else cout<<it->first<<" ";
			}
			N--;
		}
		if(a!=cas) cout<<endl;
	}
}

