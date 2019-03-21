/*
	UVA11063：B2-Sequence*CPE48-23 
	題目說明：判斷是否B2-Swquence (每個pair相減都不同且為遞增函數)，每個case要輸入N表示多少測資，再輸入N個測資 
	題目作法：先輸入N，在宣告input[N]，判斷有沒有符合遞增函數或是pair相減都不同，如果都有則把相減值d push_back給v
			  如果isB2==1為是B2-Swquence，反之則不是 
*/ 
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){	
	int N,cas=1; //	N為該case要輸入多少input，cas為case數目
	 
	while(cin>>N){
		bool isB2=1; //	isB2表示該case是B2-Sequence
		vector<int> v; // v用來存放相減數 
		int input[N]; // input[N]輸入測資 
		
		// 輸入測資 
		for(int i=0; i<N; i++) cin>>input[i];
		
		// 判斷B2-Sequence (後項減前項)
		for(int i=0; i<N-1; i++) 
			for(int j=i+1; j<N; j++){
				
				int d=input[j]-input[i]; // d儲存後項減前項的值
				
				// 函式必須要遞增 
				if(input[j]<=input[i]) {isB2=0; break;} 
				
				// find(迭代器開頭,迭代器結束,搜尋的值) ==> 值相同傳出該位址(isB2=0)，沒找到傳出v.end()	
				if( ( find(v.begin(),v.end(),d) )!=v.end() ) {isB2=0; break;} 
				 
				v.push_back(d); // 把相減值存進v中 
			}
			
		//  印出結果 
		if(isB2) cout<<"Case #"<<cas++<<": It is a B2-Sequence."<<endl<<endl;
		else cout<<"Case #"<<cas++<<": It is not a B2-Sequence."<<endl<<endl;
		
		// 去除輸入ENTER 
		char c=getchar(); 
	}
}

