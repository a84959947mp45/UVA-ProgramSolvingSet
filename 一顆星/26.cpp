/* 
	UVA948：Fibonaccimal Base
	題目說明：輸入一數字，求該數字的fibo的二進制
	題目解答：假設輸入17 = 13+3+1
	 	      位數i  0 1 [2 3 4 5 6 7  8] (位數從2開始)  
			  m[i] 	 0 1 [1 2 3 5 8 13 21] 
			  用到	      *   *     *
			  輸出   17 = 1 0 0 1 0 1 (fib) 
			  
			  1.先設變數map把2~40的費伯數列數字存起來(後面加減省時間)，x=tmp(tmp做運算用) 
			  2.找比x小的最大數的位數first 
			  3.從這first慢慢往下找，如果m[i]<=tmp則表示找到了然後減掉該數字並給push給vector為1
			    ，找不到為0，重複執行該動作直到最低位(i=2)
			  4.輸出vector 					    
*/
#include <iostream>
#include <vector>
#include <map>
// fibo 0 1 1 2 3 5 8
// 進制     1 2 3 5 8 (2開始) 

long long int fibo(long long int n){
	if(n==0) return 0;
	else if(n==1 || n==2) return 1;
	else return fibo(n-1)+fibo(n-2);
}

using namespace std;
int main(){
	int N;
	
	// 宣告fibo數列並給予值
	map<int,long long int> m;  
	for(int i=2;i<=40;i++) m[i]=fibo(i); 
	
	cin>>N;
	while(N>0){
		vector<bool> v; // 儲存二進位數 
		long long int x,i,first; // x為欲求fibo進制的數，i為迴圈用，first為比x小的最大數的位數為first 
		cin>>x;
		long long int tmp=x;
		
		// 先找比x小的最大數的位數為first 
		// 找比輸入數字小的最大數，找到後減去該數及給1並重複該動作 
		// 如果m[i]比該數字大，則給0 
		for(i=2;;i++){
			if(m[i]==x) {first=i--;break;}
			else if(m[i]>x) {first=(--i);break;}
		}
		for(i=first; i>=2; i--){
			if(m[i]<=tmp) {tmp-=m[i]; v.push_back(true);}
			else v.push_back(false);
		}
		
		cout<<x<<" = ";
		for(vector<bool>::iterator it=v.begin(); it!=v.end(); it++){
			cout<<*it;
		}
		cout<<" (fib)"<<endl;
		N--;
	}
}

