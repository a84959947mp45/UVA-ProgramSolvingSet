/* 
	UVA948�GFibonaccimal Base
	�D�ػ����G��J�@�Ʀr�A�D�ӼƦr��fibo���G�i��
	�D�ظѵ��G���]��J17 = 13+3+1
	 	      ���i  0 1 [2 3 4 5 6 7  8] (��Ʊq2�}�l)  
			  m[i] 	 0 1 [1 2 3 5 8 13 21] 
			  �Ψ�	      *   *     *
			  ��X   17 = 1 0 0 1 0 1 (fib) 
			  
			  1.���]�ܼ�map��2~40���O�B�ƦC�Ʀr�s�_��(�᭱�[��ٮɶ�)�Ax=tmp(tmp���B���) 
			  2.���x�p���̤j�ƪ����first 
			  3.�q�ofirst�C�C���U��A�p�Gm[i]<=tmp�h��ܧ��F�M���ӼƦr�õ�push��vector��1
			    �A�䤣�쬰0�A���ư���Ӱʧ@����̧C��(i=2)
			  4.��Xvector 					    
*/
#include <iostream>
#include <vector>
#include <map>
// fibo 0 1 1 2 3 5 8
// �i��     1 2 3 5 8 (2�}�l) 

long long int fibo(long long int n){
	if(n==0) return 0;
	else if(n==1 || n==2) return 1;
	else return fibo(n-1)+fibo(n-2);
}

using namespace std;
int main(){
	int N;
	
	// �ŧifibo�ƦC�õ�����
	map<int,long long int> m;  
	for(int i=2;i<=40;i++) m[i]=fibo(i); 
	
	cin>>N;
	while(N>0){
		vector<bool> v; // �x�s�G�i��� 
		long long int x,i,first; // x�����Dfibo�i��ơAi���j��ΡAfirst����x�p���̤j�ƪ���Ƭ�first 
		cin>>x;
		long long int tmp=x;
		
		// �����x�p���̤j�ƪ���Ƭ�first 
		// ����J�Ʀr�p���̤j�ơA�����h�ӼƤε�1�í��ƸӰʧ@ 
		// �p�Gm[i]��ӼƦr�j�A�h��0 
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

