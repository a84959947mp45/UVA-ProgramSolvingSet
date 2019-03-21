/*
	UVA11005�GCheapest Base
	�D�ػ����G��Jcase��(cas)�A�C��case�|��J4�C9�ӼƦr��ܨC�Ӧr��
			  �ݭn�������q�A���U�ӿ�J����N�A��X�Ӵ���δX�i��覡�|�٧�h����(�i���ܦh�Ӷi���X) 
	�D�ظѵ��G�ϥ�map<int,int> m �x�s�Ӷi������q�A�M��A��map��value���ƦC(�ϥ�vector<pair<int,int> >�ޥ�)
			  ��X��vector�̤pvalue��first�A�M��b���U�@�Ӵ���A���ƶi��ʧ@ 
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
	cin>>cas; // ��Jcase��
	
	// �p��&��X�j�� 
	for(int a=1; a<=cas; a++){
		cout<<"Case "<<a<<":"<<endl;
		int ink[36]; // ink[36] 36�Ӧr�����ݭn������ 
		
		for(int i=0; i<=35; i++) cin>>ink[i]; // ��J�U�r���һݾ����� 
		
		cin>>N; // ��J����ƶq
		
		// ��k�Gm[�i��] += ink[����%�i��] 
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
			
			//vector ��map�Ƥj�p 
			vector<pair<int,int> > vec(m.begin(),m.end());  
			sort(vec.begin(),vec.end(),CmpByValue);  
			
			cout<<"Cheapest base(s) for number "<<number<<": ";
			
			// ��X�̤p�����ݨD���i�� 
			for(vector<pair<int,int> >::iterator it=vec.begin(),it2=vec.begin()+1; it!=vec.end(); it++,it2++){
				if(it2->second > it->second) {cout<<it->first<<endl; break;}
				else cout<<it->first<<" ";
			}
			N--;
		}
		if(a!=cas) cout<<endl;
	}
}

