//04-UVA100�GThe 3n + 1 problem 
//�D��: ��J��ӭȡA�P�_�o�����]�t�o��Ӽƪ��Ҧ����Ʀr���ƶq 
//  
//  if n is odd then n �� 3n + 1
//  else n �� n/2
//  ����1����A�q1�}�l�j��@���ƶq�[1�C

//  ��ӼƤ����C�ӼƳ��n�]�@���A���X�̤j���ƶq�A������� 

//  ���D�ޥ� :  �j��ϥ�


#include <iostream>
#include <string>

using namespace std;

int main(){
 
   int x,y;
   int i,c,p,max=0;
   int temp1,temp2;
   //input
   while(cin>>x>>y){
      //judge which bigs
      if(x>y){
         temp2=x;
         temp1=y;
      }else{
         temp1=x;
         temp2=y;
      }
      //�P�_�W�h
      c=1;max=0;
      for(i=temp1;i<=temp2;i++){
         p=i;c=1;
         while(p!=1){
            if(p%2==1){
                p=3*p+1;c++;
            }else{
                p=p/2;c++;
            }
         }
         //��X�̤j���ƶq 
         if(c>max){
            max=c;
         } 
      }
      //��X
      cout<<x<<" "<<y<<" "<<max<<endl;
   }

}


