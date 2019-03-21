/*
	UVA10622：Tell me the frequencies!
	題目說明：輸入好幾行的字串，依字元出現頻率由小排到大輸出該字元的ASCII及他的出現次數，中間以空格隔開 
	題目作法：如下 
*/
#include <iostream> 
#include <map>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;

// map值排序 
bool CmpByValue(pair<int,int> &a, pair<int,int> &b){
	if(a.second==b.second) return a.first>b.first;
	else return a.second<b.second;
}

int main(){
    int c=0;
	string s;
	while(getline(cin,s,'\n')){
	
		if(c!=0) cout<<endl; // 防止presentation-error
		
		map<int,int> m; // map輸入的字元集合
		
		// 字元出現次數計算 
		for(string::iterator it=s.begin(); it!=s.end(); it++){
			m[*it]++;
		}
		
		// 字元集合的出現次數由大排到小 
		vector<pair<int,int> > vec(m.begin(),m.end());
		sort(vec.begin(),vec.end(),CmpByValue);
		
		// 輸出 
		for(vector<pair<int,int> >::iterator it=vec.begin(); it!=vec.end(); it++){
			cout<<it->first<<" "<<it->second<<endl;
		}
		
		c++; // 防止presentation-error
	}
}
