//UVA10035-PrimaryArithmetic
#include<iostream>
using namespace std;

int main(){
	long in_x,in_y,carry=0,out;
	//in_x����J���Ĥ@�Ӽ�,in_y���ĤG��,carry���e�@��i��,out�h�O��X
	for(;;){
		in_x=0;
		in_y=0;
		cin>>in_x>>in_y; //��J 
		if(in_x==0&&in_y==0) break; //�Y��ƬҬ�0�h���X�j��
		carry=0; //�M��carry 
		out=0; //�M��out 
		for(;in_x!=0||in_y!=0;){ //�}�l�p��,��ƳQ����0�ɸ��X 
			if((in_x%10+in_y%10+carry)>=10){ //�Y�n�i�� 
				out++; //��X�ƶq+1 
				carry=1; //�]�w�U���i�� 
			}
			in_x/=10; //�h������ 
			in_y/=10;
		} 
		if(out==0)cout<<"No"; //�N0�ରNo 
		else cout<<out;
		cout<<" carry operation";
		if(out!=0&&out!=1) cout<<"s"; //�ˬd�Ƽ� 
		cout<<"."<<endl;
	} 
	return 0; //EOF
}
