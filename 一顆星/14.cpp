/*
	11_UVA12019_Doom's Day Algorithm
	�D�ػ���:��J�X��X��A��X2011�~�Ӥ�Ӥ鬰�P���X
	�D�ا@�k:(��J������`�Ѽ�-1) % 7 �Y�i�D�X 
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	int N,a,b,m[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	//					1/1			1/2		1/3		1/4			1/5			1/6			1/7
	string week[7] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday",};
	
	cin>>N;
	while(N>0){
		int count=0; // ���J������`�Ѽ� 
		cin>>a>>b;
		for(int i=1; i<=a; i++){
			if(i==a) count += b; //	��ۦP�A�h�[��Ѽ� 
			else count += m[i];	 // �뤣�P�A�[��Ѽ� 
		}
		cout<<week[(count-1)%7]<<endl; //	1/1 Sat������I�A�n��@�� 
		N--;
	}
}

