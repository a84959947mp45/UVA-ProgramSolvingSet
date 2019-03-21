/*
	UVA10622�GTell me the frequencies!
	�D�ػ����G��J�n�X�檺�r��A�̦r���X�{�W�v�Ѥp�ƨ�j��X�Ӧr����ASCII�ΥL���X�{���ơA�����H�Ů�j�} 
	�D�ا@�k�G�p�U 
*/
#include <iostream> 
#include <map>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;

// map�ȱƧ� 
bool CmpByValue(pair<int,int> &a, pair<int,int> &b){
	if(a.second==b.second) return a.first>b.first;
	else return a.second<b.second;
}

int main(){
    int c=0;
	string s;
	while(getline(cin,s,'\n')){
	
		if(c!=0) cout<<endl; // ����presentation-error
		
		map<int,int> m; // map��J���r�����X
		
		// �r���X�{���ƭp�� 
		for(string::iterator it=s.begin(); it!=s.end(); it++){
			m[*it]++;
		}
		
		// �r�����X���X�{���ƥѤj�ƨ�p 
		vector<pair<int,int> > vec(m.begin(),m.end());
		sort(vec.begin(),vec.end(),CmpByValue);
		
		// ��X 
		for(vector<pair<int,int> >::iterator it=vec.begin(); it!=vec.end(); it++){
			cout<<it->first<<" "<<it->second<<endl;
		}
		
		c++; // ����presentation-error
	}
}
