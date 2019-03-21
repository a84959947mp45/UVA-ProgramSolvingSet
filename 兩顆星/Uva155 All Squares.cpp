#include <iostream>
#include <iomanip>

using namespace std;

//�p�⦳�S���Q�]�i�h����θ̭� 
void JudgeInSquares(int,int,int);

//�n�Q�p�⪺�y�� 
int px,py;
//�Q�]��ƶq
int T_count; 


int main(){
	
	//����Τj�p 
	int k;
	//�}�l��J�̤j����Ϊ��j�pk,px�Bpy�Q�p�⪺�y���I 
	while(cin>>k>>px>>py){
		
		if(k==0&&px==0&&py==0){
			break;
		}
		//
		T_count=0;
		JudgeInSquares(k,1024,1024);
		cout<<setw(3)<<T_count<<endl;
		
		
	}
	
	
} 
void JudgeInSquares(int k,int sx,int sy){
      
	  int reK;
	  //�U�@�Ӫ��a������Τj�p 
	  reK = k/2;	
	  
	  if(k==0){
	  	return;
	  }
	  
	  if((sx-k)<=px&&(sx+k)>=px&&(sy+k)>=py&&(sy-k)<=py){
	  	 T_count++;
	  }
	  
	  //���ͪ��a�����.�h�p��j�p
	   JudgeInSquares(reK,sx+k,sy+k); 
	   JudgeInSquares(reK,sx+k,sy-k);
	   JudgeInSquares(reK,sx-k,sy+k);
	   JudgeInSquares(reK,sx-k,sy-k);

} 





